class Solution {
public:
    void sortString(string &str)
{
   sort(str.begin(), str.end());
   // cout << str<<endl;
}
 
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;
        vector<vector<string>> st;
        for(string str : strs){
            string temp = str;
            sortString(temp);
            mp[temp].push_back(str);
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            st.push_back(it->second);
        }
        return st;
    }
};