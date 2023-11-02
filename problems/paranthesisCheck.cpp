class Solution {
public:
    bool isValid(string st) {
        stack<int> s;
        for(auto& c: st){
            if (s.empty() || c == '{' || c == '[' || c == '(') s.push(c);
            else if(c == '}' && s.top() == '{')
                s.pop();
            else if(c == ']' && s.top() == '[')
                s.pop();
            else if(c == ')' && s.top() == '(')
                s.pop();
            else
                s.push(c);
            
        }
        return s.empty();
        
    }
};