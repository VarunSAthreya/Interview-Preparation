class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int x : nums)
            sum += x;

        if (sum % 2 != 0)
            return false;

        vector<vector<int>> dp(nums.size(), vector<int>(sum / 2 + 1, -1));
        return knap(nums, 0, sum / 2, dp);
    }

    bool knap(vector<int>& nums, int n, int target, vector<vector<int>>& dp) {
        if (n == nums.size()) {
            return target == 0;
        }
        if (target < 0)
            return false;

        if (dp[n][target] != -1)
            return dp[n][target] == 1;

        bool res = knap(nums, n + 1, target - nums[n], dp) ||
                   knap(nums, n + 1, target, dp);
        dp[n][target] = res ? 1 : 0;
        return res;
    }
};
