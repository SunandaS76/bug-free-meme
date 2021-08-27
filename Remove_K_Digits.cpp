class Solution {
public:
    string removeKdigits(string num, int k) {
      stack <char>st;
        for(int i=0; i<num.length(); i++){
            while(!st.empty() && k>0 && num[i]<st.top()){
                st.pop();
                k--;
            }
            if(num[i] != '0' || !st.empty())
            {
            st.push(num[i]);
             
            } 
        }
         while(!st.empty()&&k>0)
        {
             
            st.pop();
             
            k--;
        }
        string res="";
        
        while(!st.empty())
        {
            res.push_back(st.top());
            
            st.pop();
        }
        reverse(res.begin(),res.end());
        if(res.size()==0)
        {
            return "0";
        }

        return res;

        
        
    }
};
