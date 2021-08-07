void rotate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[i] = nums[i];
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            nums[(it->first + k) % nums.size()] = it->second;
        }
    }