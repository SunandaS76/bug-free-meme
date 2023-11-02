bool isPalindrome(int x) {
        long p=0;
        int t=x;
        while(x>0)
        {
            p = p*10 + x%10;
            x = x/10;
        }
        if (t == p)
            return true;
        else
            return false;
    }