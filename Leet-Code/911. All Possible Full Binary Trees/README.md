# 894. All Possible Full Binary Trees

This problem involved about, given an integer n, return a list of all possible full binary trees with n nodes. Each node of each tree in the answer must have Node.val == 0

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/all-possible-full-binary-trees/description/)

**Key Insights :**<br/>

1. `Recursive Construction`: FBTs can be built by combining smaller FBTs as left and right subtrees
2. `Memoization`: Store previously computed results to avoid redundant calculations
3. `Odd Node Constraint`: Only odd numbers of nodes can form FBTs (even `n` returns empty)
4. `Base Case`: A single node is the smallest FBT

**Algorithm Steps :**<br/>

1. `Base Cases`:
    - If `n` is even: return empty list (no FBT possible)
    - If `n` is 1: return single node tree
2. `Memoization Check`:
    - Return cached results if available
3. `Recursive Construction`:
    - For each possible left subtree size (odd numbers)
    - Get right subtree size (n - 1 - left size)
    - Combine all left-right subtree pairs to form new trees
4. `Result Caching`:
    - Store generated trees in memoization map
    - Return the list of generated trees

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(Catalan(n/2))` - The number of full binary trees with n nodes is the (n/2)-th Catalan number because each full binary tree splits nodes into two smaller full binary trees recursively. The Catalan number grows exponentially, approximately `O(4^n / (n^1.5))`.

-   Space-Complexity: `O(Catalan(n/2))` - The recursion stack depth (which is `O(n)` in the worst case), The recursion stack depth (which is `O(n)` in the worst case).
