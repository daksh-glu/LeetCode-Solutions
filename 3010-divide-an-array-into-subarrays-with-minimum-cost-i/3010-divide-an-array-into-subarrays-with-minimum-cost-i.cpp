class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(4, INT_MAX));
        
        dp[0][0] = 0;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 3; j++) {
                for (int k = i - 1; k >= 0; k--) {
                    if (dp[k][j - 1] != INT_MAX) {
                        dp[i][j] = min(dp[i][j], dp[k][j - 1] + nums[k]);
                    }
                }
            }
        }
        
        return dp[n][3];
    }
};