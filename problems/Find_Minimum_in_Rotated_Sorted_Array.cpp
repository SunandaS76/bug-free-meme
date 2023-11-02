// Solution 1: Using sort function

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};

// Solution 2: Using binary search

class Solution {
public:
   int findMin(vector<int>& nums){
    int n =  nums.size();
    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2 ;
    
    while(start <= end){
        mid = (start + end) / 2;
        if(mid == n-1 || nums[mid] > nums[mid+1])
            break;
        if(nums[mid] >= nums[0])
            start = mid + 1;
        else
            end = mid - 1;
    }
    if(mid == n-1)
        return nums[0];
    return nums[mid+1];
}
};

