int n=nums.size();
        vector<int>ans=nums;
        for(int i=1;i<n;i++){
            ans[i]=ans[i]+ans[i-1];
        }
        return ans;