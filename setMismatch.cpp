class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int xr=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            xr^=nums[i];
            xr^=(i+1);
        }
        int bitNo=0;
        while(xr){
            if(xr&1) {
                bitNo++;
                break;
            }
            xr=xr>>1;
            bitNo++;
        }

        int zeros=0,ones=0;
        bitNo--;
        for(int i=0;i<n;i++){
            if((nums[i]>>bitNo)&1) ones^=nums[i];
            else zeros^=nums[i];

            if(((i+1)>>bitNo)&1) ones^=(i+1);
            else zeros^=(i+1);
            
        }

        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==zeros) cnt++;
        }
        if(cnt==2) return {zeros,ones};
        return {ones,zeros};



    }
};