// dynamic programming approach
int rob(vector<int>& nums) {
        int i=0, n = nums.size();
        if (n == 0)
            return 0;
        vector<int> dp(n);
        if(n>=1)
            dp[0] = nums[0] ;
        if(n>=2)
            dp[1] = max(nums[0], nums[1]);
        for(i=2; i<n; i++)
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        return dp[n-1];
    }