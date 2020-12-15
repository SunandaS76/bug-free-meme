//Solution 1 

int removeDuplicates(vector<int>& nums) {
        int i = 0; 
        for (auto& x : nums) {
            if (i == 0 or nums[i-1] < x) {
                nums[i++] = x; 
            }
        }
        return i; 
    }

//Solution 2

int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator ip; 
        ip = std::unique(nums.begin(), nums.end());
        nums.resize(std::distance(nums.begin(), ip)); 
            return nums.size();
    }