/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function(nums) {
    const map = {};
    let max = 0;
    let res = 0;

    for(let i of nums) {
        if(!map[i]) map[i] = 1;
        else map[i]++;

        if(map[i] > max) {
            max = map[i];
            res = map[i];
        } else if(map[i] == max) {
            res += max;
        }
    }

    return res;
};
