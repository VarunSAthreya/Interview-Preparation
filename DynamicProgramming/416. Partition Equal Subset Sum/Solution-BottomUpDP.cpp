class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int x : nums)
            sum += x;

        if (sum % 2 != 0)
            return false;

        int target = sum / 2;

        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for (int n : nums) {
            for (int curr = target; curr >= n; curr--) {
                dp[curr] = dp[curr] || dp[curr - n];
            }
        }
        return dp[target];
    }
};
