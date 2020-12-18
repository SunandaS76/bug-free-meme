int lengthOfLongestSubstring(string s) {
        map <char,int> charCount;
        int start =-1;
        int count =0; 
        for(int i=0;i<s.size();i++)
        {
            if(charCount.count(s[i])!=0)
            {
                start = max(charCount[s[i]],start);
            }
            charCount[s[i]]=i;
            //count++;
            count = max(count,i-start);
        }
        return count;
    }