// Method one using O(1) Space
int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0], curSum = 0;
        
        for (int n : nums) {
            if (curSum < 0)
                curSum = 0;
            curSum += n;
            maxSub = max(maxSub, curSum);
        }
        return maxSub;
    }

// Method two using O(N) extra space

int maxSubArray(vector<int>& nums) {
        int i, n = nums.size();
        vector<long long> dp(n+1, 0);
        long long ans = INT_MIN;
        for(int i=0; i<n; i++){
            dp[i + 1] = nums[i];
            dp[i + 1] = max(dp[i + 1], nums[i] + dp[i]);
            ans = max(ans, dp[i + 1]);
        }
        return ans;
    }