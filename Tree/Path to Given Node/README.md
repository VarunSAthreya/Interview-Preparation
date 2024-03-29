# [Path to Given Node](https://www.interviewbit.com/problems/path-to-given-node/)

**Level**: `Easy`.

**Topic**: **`Amazon`** ,`Tree`, `Binary Tree`, `Depth First Search`, `Backtracking`, `String`.

Problem Description

Given a Binary Tree **A** containing **N** nodes.

You need to find the path from **Root** to a given node **B**.

**NOTE:**

- No two nodes in the tree have same data values.
- You can assume that **B** is present in the tree **A** and a path always exists.

**Problem Constraints**

- `1 <= N <= 10^5`

- `1 <= Data Values of Each Node <= N`

- `1 <= B <= N`

**Input Format**
First Argument represents pointer to the root of binary tree **A**.

Second Argument is an integer **B** denoting the node number.

**Output Format**
Return an one-dimensional array denoting the path from Root to the node B in order.

**Example Input**

```txt
Input 1:

 A =

           1
         /   \
        2     3
       / \   / \
      4   5 6   7


B = 5

Input 2:

 A =
            1
          /   \
         2     3
        / \ .   \
       4   5 .   6


B = 1
```

**Example Output**

```txt
Output 1:

 [1, 2, 5]
Output 2:

 [1]
```

**Example Explanation**

- Explanation 1:

```txt
 We need to find the path from root node to node with data value 5.
 So the path is 1 -> 2 -> 5 so we will return [1, 2, 5]
 ```

- Explanation 2:

```txt
 We need to find the path from root node to node with data value 1.
 As node with data value 1 is the root so there is only one node in the path.
 So we will return [1]```
