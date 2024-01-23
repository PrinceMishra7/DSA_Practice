#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	
	set<vector<int>> st;
	for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++){

			for(int k=j+1;k<n;k++){
			
				int sum=arr[i]+arr[j]+arr[k];
				if(sum==K){
					vector<int> temp={arr[i],arr[j],arr[k]};
					sort(temp.begin(),temp.end());
					st.insert(temp);
				}
			}
		}
	}

	vector<vector<int>> ans;
	for(auto it:st){
		ans.push_back(it);
	}
	return ans;
}