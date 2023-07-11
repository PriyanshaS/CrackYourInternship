class Solution {
public:
    long helper(int amount ,vector<int>& coins ,vector<long>& dp){
        if(amount ==0)
        return 0;
        if(amount<0)
        return INT_MAX;
        if(dp[amount]!=-1)
        return dp[amount];
        dp[amount]=INT_MAX;
        for(int i =0 ; i< coins.size() ; i++){
           dp[amount] = min(dp[amount],helper(amount-coins[i],coins,dp)+1);
        }
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<long> dp(amount+1,-1);
        long ans = helper(amount , coins,dp);
        if(ans>=INT_MAX)
        return -1;
        return ans;
    }
};
