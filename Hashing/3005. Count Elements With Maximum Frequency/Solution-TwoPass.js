/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function(nums) {
    const map = {};
    let max = 0;

    for(let i of nums) {
        if(!map[i]) map[i] = 1;
        else map[i]++;

        max = Math.max(max, map[i]);
    }

    let result = 0;
    for(let i of Object.values(map)) {
        if(i === max) result += max;
    }

    return result;
};
