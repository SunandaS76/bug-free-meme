vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j=i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target)
                {   
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }         
        }
        return ans;
    }

// using vector iterator approch 

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(auto it1 = nums.begin(); it1 != nums.end(); ++it1)
        {
            auto it2 = find(it1 + 1, nums.end(), target - *it1);
                if (it2 != nums.end())
                {
                    result.push_back(it1 - nums.begin());
                    result.push_back(it2 - nums.begin());
                }
        }
        return result;
    }

// using unordered map

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> my_map;
        for(int i=0; i < nums.size(); ++i)
        {
            int num = nums[i];
            int comp = target - num ;
            auto it = my_map.find(comp);
            if (it != my_map.end()) {
                return {it->second, i} ;
            }
            my_map[num] = i ;    
        }
        return {};
    }