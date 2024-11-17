class Solution {
public:
    
    int climbStairs(int n) {
        int ans;
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        dp.push_back(1);
        for(int i=2; i<=n; i++){
            dp[i]= dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
