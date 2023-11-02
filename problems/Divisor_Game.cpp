bool divisorGame(int N) {
        if(N==1) return 0;
        vector<int> dp(N+1, 0);
        dp[2]=1;
        
        for(int i=3; i<=N; i++){
            for(int j=1; j<=i/2; j++){
                if(i%j==0 && dp[i-j]==0){
                    dp[i]=1;
                    break;
                }
            }
        }
        return dp[N];
    }