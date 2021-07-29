double myPow(double x, int n) {
          if(n == 0 || n == 1)    return n == 0 ? 1 : x;
        long long int no = n;
        if(n<0)
        {
            x = 1/x;
            no *= -1;
        }
        
        if(n%2)
        {
            return x*myPow(x*x, no/2);
        }
        
        
        return myPow(x*x, no/2);
    }