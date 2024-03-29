# [658. Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/)

**Level**: `Medium`.

**Topic**: `Array`, `Binary Search`, `Two Pointers`, `Sorting`, `Heap (Priority Queue)`.

Given a <strong>sorted</strong> integer array <code>arr</code>, two integers <code>k</code> and <code>x</code>, return the <code>k</code> closest integers to <code>x</code> in the array. The result should also be sorted in ascending order.

An integer <code>a</code> is closer to <code>x</code> than an integer <code>b</code> if:

<ul>
 <li><code>|a - x| &lt; |b - x|</code>, or</li>
 <li><code>|a - x| == |b - x|</code> and <code>a &lt; b</code></li>
</ul>

<strong>Example 1:</strong>
<pre><strong>Input:</strong> arr = [1,2,3,4,5], k = 4, x = 3
<strong>Output:</strong> [1,2,3,4]
</pre><strong>Example 2:</strong>
<pre><strong>Input:</strong> arr = [1,2,3,4,5], k = 4, x = -1
<strong>Output:</strong> [1,2,3,4]
</pre>

<strong>Constraints:</strong>

<ul>
 <li><code>1 &lt;= k &lt;= arr.length</code></li>
 <li><code>1 &lt;= arr.length &lt;= 10<sup>4</sup></code></li>
 <li><code>arr</code> is sorted in <strong>ascending</strong> order.</li>
 <li><code>-10<sup>4</sup> &lt;= arr[i], x &lt;= 10<sup>4</sup></code></li>
</ul>
