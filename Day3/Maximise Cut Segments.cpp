Sloution{ public:
 
    int helper(int val,vector<int> len , vector<int> &dp){
        if(val<0)
        return INT_MIN ;
        if(val==0)
        return 0 ;
        if(dp[val]!= -1)
        return dp[val];
        int a = helper(val-len[0] , len , dp)+1;
        int b = helper(val-len[1] , len , dp)+1;
        int c = helper(val-len[2] , len , dp)+1;
        dp[val] = max(a , max(b,c));
        return dp[val];
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> len = {x,y,z};
        vector<int> dp(n+1, -1);
        int ans = helper(n,len,dp);
        if(ans<0)
        return 0 ;
        return ans;
        
    }};
