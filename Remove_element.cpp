int removeElement(vector<int>& nums, int val) {
        int i=0, size = nums.size();
        while(i< size)
        {
            if(nums[i] == val)
            {
                nums.push_back(nums[i]);
                nums.erase(nums.begin() + i);
                size--;
            }
            else
            {
                i++;
            }
        }
        return size;
    }