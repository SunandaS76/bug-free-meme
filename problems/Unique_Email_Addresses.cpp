int numUniqueEmails(vector<string>& emails) {
        vector<int> :: iterator it, it1, it2 ;
        unordered_set<string> results ;
        
        int x=0;
        for(int i=0; i < emails.size(); i++)
        {
            string ans = "";
            size_t found_at = emails[i].find('@');
            size_t found_plus = emails[i].find('+');
            for(int j=0; j < emails[i].size(); j++){
                if(j<found_at)
                {
                    if(emails[i][j] == '.' || emails[i][j] == '+' || j>found_plus)
                    { 
                        continue;
                    }
                    else
                        ans.push_back(emails[i][j]);

                } 
                else {
                        ans.push_back(emails[i][j]);
                }
            }
            results.insert(ans);
    
            }
        
        return results.size();
    }