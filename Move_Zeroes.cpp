void moveZeroes(vector<int>& nums) {
        auto it = nums.begin();
        unordered_map<int,int>mp;
        while(it != nums.end())
            {
            if(*it == 0)
            {
            mp[0]++;
            it = nums.erase(it);
            }
            else it++;
        }
        while(mp[0] != 0)
        {
            nums.push_back(0);
            mp[0]--;
        }
    }