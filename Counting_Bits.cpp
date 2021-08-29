vector<int> countBits(int n) {
        vector<int>ans(n+1);
        int i ;
        ans[0] = 0;
        for(i = 1; i<=n; i++)
        {
            ans[i] = ans[i/2] + i%2;
        }
        return ans;
    }