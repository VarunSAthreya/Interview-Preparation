# [410. Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)

**Level**: `Hard`.

**Topic**: `Array`, `Binary Search`, `Dynamic Programming`, `Greedy`.

Given an array <code>nums</code> which consists of non-negative integers and an integer <code>m</code>, you can split the array into <code>m</code> non-empty continuous subarrays.

Write an algorithm to minimize the largest sum among these <code>m</code> subarrays.

<strong>Example 1:</strong>

<pre><strong>Input:</strong> nums = [7,2,5,10,8], m = 2
<strong>Output:</strong> 18
<strong>Explanation:</strong>
There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8],
where the largest sum among the two subarrays is only 18.
</pre>

<strong>Example 2:</strong>

<pre><strong>Input:</strong> nums = [1,2,3,4,5], m = 2
<strong>Output:</strong> 9
</pre>

<strong>Example 3:</strong>

<pre><strong>Input:</strong> nums = [1,4,4], m = 3
<strong>Output:</strong> 4
</pre>

<strong>Constraints:</strong>

<ul>
 <li><code>1 &lt;= nums.length &lt;= 1000</code></li>
 <li><code>0 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
 <li><code>1 &lt;= m &lt;= min(50, nums.length)</code></li>
</ul>
