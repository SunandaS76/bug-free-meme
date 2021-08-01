 int subarraySum(vector<int>& nums, int k) {
         map<int,int>mp;
        mp[0]++;
        int sum = 0;
        int count  = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
            count = count+mp[sum-k];
            cout<<i<<" "<<sum<<" "<<count<<endl;
            mp[sum]++;
            
        }
        return count;
    }