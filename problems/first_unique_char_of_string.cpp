int firstUniqChar(string s) {
        unordered_map<char, int> mp ;

        for(int i=0; s[i] != '\0'; i++){
            mp[s[i]] = 0;
        }
        for(int i=0; s[i] != '\0'; i++){
            mp[s[i]] = mp[s[i]] + 1;
        }
        
        for(int i=0; s[i] != '\0'; i++){
            if(mp[s[i]] == 1)
                return i ;
        }
            return -1;
            
            }

// Efficient code

int firstUniqChar(string s) {
        int freq[26] = {0};
        for(int i=0; i<s.size(); ++i)
        {
            freq[s[i] - 'a']++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(freq[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }