class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) return 0;
        int result = INT_MAX;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++) {
            long long sum = (long long)nums[i]*k;
            int cnt = upper_bound(nums.begin(), nums.end(), sum) - nums.begin();
            // cout<<cnt<<"\n";
            result = min(result, n-cnt+i);
        }

        return result;
    }
};
