# [663. Walls and Gates](https://leetcode.com/problems/walls-and-gates/) or [663 · Walls and Gates](https://www.lintcode.com/problem/663/)

**Level:** `Medium`.

**Topic:** `Array`, `Breadth-First Search`, `Matrix`.

You are given a m x n 2D grid initialized with these three possible values.
`-1 `- A wall or an obstacle.
`0` - A gate.
`INF` - Infinity means an empty room. We use the value `231 - 1 = 2147483647` to represent INF as you may assume that the distance to a gate is less than `2147483647`.
Fill each empty room with the distance to its nearest gate. If it is impossible to reach a `gate`, it should be filled with `INF`.

**Example1:**

```
Input:
[[2147483647,-1,0,2147483647],[2147483647,2147483647,2147483647,-1],[2147483647,-1,2147483647,-1],[0,-1,2147483647,2147483647]]
Output:
[[3,-1,0,1],[2,2,1,-1],[1,-1,2,-1],[0,-1,3,4]]

Explanation:
the 2D grid is:
INF  -1  0  INF
INF INF INF  -1
INF  -1 INF  -1
  0  -1 INF INF
the answer is:
  3  -1   0   1
  2   2   1  -1
  1  -1   2  -1
  0  -1   3   4
```

**Example2:**

```
Input:
[[0,-1],[2147483647,2147483647]]
Output:
[[0,-1],[1,2]]
```
