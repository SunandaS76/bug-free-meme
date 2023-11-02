string longestCommonPrefix(vector<string>& strs) {
        
        vector<int> size;
        string temp = strs[0];
        string cf = "";
        bool flag;
        for(int i=0; i<temp.size();i++)
        {
            for(int j=0; j<strs.size(); j++)
            {
                if(i>strs[j].size() || strs[j][i] != temp[i])
                {flag = false;
                    return cf;}
                else 
                    flag =  true;
            }
            if(flag)
            cf.push_back(temp[i]);
        }
        return cf;
    }