bool rotateString(string s, string goal) {

        vector<int> characterLocations;
        int loc_ = goal.find(s[0]);
        if (loc_ == -1)
            return false;
        for(int i =0; i < goal.size(); i++)
        {
            if(goal[i] == s[0])
            characterLocations.push_back(i);
        }
       
        bool flag=true;
        if(s.size() == goal.size())
        {
            for(int j=0; j<characterLocations.size();j++)
            {
                loc_ = characterLocations[j];
                flag = true;
                for (int i=0; i != s.size(); i++){
                   if(s[i] != goal[loc_++]) 
                   {
                       cout<<goal[loc_]<<": "<<loc_<<" ";
                       flag = false;
                      
                   } 
                   if(loc_ == goal.size())
                        loc_ = 0;
            }
                if(flag == true)
                    break;
        }
            return flag;
        }
        return false;
        
    }