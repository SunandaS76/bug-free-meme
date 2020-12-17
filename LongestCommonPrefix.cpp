string longestCommonPrefix(vector<string>& strs) {
        string r = "";
        char c;
        if(strs.size()==0) return r;
        for (int i=0; i<strs[0].length();i++)
             {
                 c = strs[0][i];
                 for (int j=0; j<strs.size();j++)
                 {
                     if(strs[j][i] != c)
                         return r;
                 }
                 r += c;
             }
             return r;
    }