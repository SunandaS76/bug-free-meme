class Solution {
public:
    int n;
   void rec(vector<vector<int>>& ans, vector<int>& temp,  unordered_set<int>& ele,const vector<int>& nums){
        if(temp.size() == n){
            ans.push_back(temp);
            return ;
        }
        
        for(const int& num: nums)
        {
            if(ele.find(num) != ele.end())
            {
               ele.erase(num);
                temp.push_back(num);
                rec(ans, temp, ele, nums);
                temp.pop_back();
                ele.insert(num);
            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>> results;
        unordered_set<int> ele(nums.begin(), nums.end());
        n = ele.size();
        rec(results, temp, ele, nums);
        
        return results;
    }
};