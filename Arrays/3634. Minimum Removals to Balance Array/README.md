# [3634. Minimum Removals to Balance Array](https://leetcode.com/problems/minimum-removals-to-balance-array/)

**Topic:** `Array`, `Sorting`, `Binary Search`, `Two Pointers`.
**Level:** `Medium`.

You are given an integer array `nums` and an integer `k`. An array is considered **balanced** if its maximum element is at most `k` times its minimum element.

You may remove any number of elements from `nums` without making it empty.

Return the **minimum number of elements to remove** so that the remaining array is balanced.

**Note:** An array of size 1 is always considered balanced.

**Example 1:**

```
Input: nums = [2,1,5], k = 2
Output: 1
Explanation: Remove 5 to get [2, 1] where max(2, 1) = 2 <= 1 * 2.
```

**Example 2:**

```
Input: nums = [1,6,2,9], k = 3
Output: 2
Explanation: Remove 1 and 9 to get [6, 2] where max(6, 2) = 6 <= 2 * 3.
```

**Example 3:**

```
Input: nums = [4,6], k = 2
Output: 0
Explanation: Already balanced since max(4, 6) = 6 <= 4 * 2.
```

**Constraints:**

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^9`
- `1 <= k <= 10^5`
