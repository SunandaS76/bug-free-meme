// Using binary search

int searchInsert(vector<int>& nums, int target) {
       int start=0,end=nums.size()-1,ans=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        if(ans==-1)
            ans=nums.size();
        return ans;
    }

    // Using Simple for loop
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for(i=0; i < nums.size(); i++)
        {
            if (nums.at(i) == target)
                 return i; 
            else if (nums.at(i) > target)
                break;
          
        }
         return i;
    }

    // Using lower_bound functions

    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }