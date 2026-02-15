class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> map(101, 0);
        int max =0, res = 0;

        for(int x : nums) {
            map[x]++;

            if(map[x] > max) {
                max = map[x];
                res = max;
            } else if(map[x] == max){
                res += max;
            }
        }

        return res;
    }
};
