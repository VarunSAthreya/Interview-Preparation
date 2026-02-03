class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int len = nums.size();
        if(len <= 3) {
            return false;
        }
        int p = -1, q= -1;

        for(int i=1;i<len; i++) {
            int cur = nums[i];
            int prev = nums[i-1];
            if(prev == cur) {
                return false;
            }
            if(p == -1 && q == -1) {
                if(prev > cur) {
                    p = i-1;
                    continue;
                }
            }

            if(p != -1 && q == -1) {
                if(prev < cur) {
                    q = i-1;
                    continue;
                }
            }

            if(p != -1 && q!= -1) {
                if(nums[i-1] > nums[i]) {
                    return false;
                }
            }
        }

        if(p == 0 || q == len-1) return false;
        return p != -1 && q!=-1;
    }
};
