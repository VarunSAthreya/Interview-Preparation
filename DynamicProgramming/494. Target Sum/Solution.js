/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var findTargetSumWays = function (nums, target) {
    const memo = new Map();
    return knap(nums, 0, target, memo);
};

function knap(nums, n, target, memo) {
    if (n === nums.length) {
        return target === 0 ? 1 : 0;
    }

    const key = `${n},${target}`;

    if (memo.has(key)) {
        return memo.get(key);
    }

    const result =
        knap(nums, n + 1, target - nums[n], memo) +
        knap(nums, n + 1, target + nums[n], memo);

    memo.set(key, result);
    return result;
}
