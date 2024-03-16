class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        n=len(nums)
        umap={}
        ans=0
        sum=0
        for i in range(0,n):
            if nums[i]==1:
                sum+=1
            else:
                sum-=1
            
            if sum==0:
                ans=max(ans,i+1)
                continue
            else:
                if sum in umap:
                    ans=max(ans,i-umap[sum])
                else:
                    umap[sum]=i
        
        return ans