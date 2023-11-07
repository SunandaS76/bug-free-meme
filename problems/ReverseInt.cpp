// Leetcode 7
// https://leetcode.com/problems/reverse-integer/

// Solution 1

int reverse(int x) {
        string s=to_string(x);
        
        std::reverse(s.begin(),s.end());
        
        long long y=stoll(s);
        
        if(y>INT_MAX) return 0;
        
        if(x<0) return -y;
        
        return y; 
    }

// Solution 2   

int reverse(int x) {
        long p=0;
        if (x == 0)
            p = 0;
        if (x > 0)
        {
             while(x != 0)
            {
                p = p*10 + x % 10;
                x = x / 10;
            }
            
        }
        if(x < 0)
        {
            while(x != 0)
            {
                p = (p*10 - x % 10);
                x = x / 10;
            }
            p = -p;
        }
        if (p <= INT_MIN || p >= INT_MAX) {
            p = 0;
        }
          
        return int(p);
    }

// Solution 3

int reverse(int n) {
        long  num = n;
        long newNum = 0;
        while(num!=0){
            newNum = newNum*10 + (num%10);
            num = num/10;
        } 
        if(newNum < INT_MIN || newNum > INT_MAX)
            return 0;  
        return newNum;
    }