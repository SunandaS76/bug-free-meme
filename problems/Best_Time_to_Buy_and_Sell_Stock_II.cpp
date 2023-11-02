int maxProfit(vector<int>& prices) {
       int n = prices.size();
        vector<int> dp(prices.size(), 0);
       
        for(int i = 1; i<n; i++)
        {
            
            dp[i] = dp[i-1] + max(0, prices[i] - prices[i-1]);
            
        }
        return dp[n-1];
    }