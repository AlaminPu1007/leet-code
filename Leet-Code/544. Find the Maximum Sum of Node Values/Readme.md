## 3068. Find the Maximum Sum of Node Values

This problem involved about, there exists an undirected tree with n nodes numbered 0 to n - 1. You are given a 0-indexed 2D integer array edges of length n - 1, where edges[i] = [ui, vi] indicates that there is an edge between nodes ui and vi in the tree. You are also given a positive integer k, and a 0-indexed array of non-negative integers nums of length n, where nums[i] represents the value of the node numbered i.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-maximum-sum-of-node-values/description/)

**Approach :**<br/>

1. **Calculate Initial Sum and Delta Array**:

   - Initialize `res` to the sum of all elements in `nums`.
   - For each element in `nums`, compute the difference between the value after XOR with `k` and the original value, storing it in the `delta` array.

2. **Sort Delta Array**:

   - Sort the `delta` array in descending order to ensure the largest beneficial changes are considered first.

3. **Iterate in Pairs**:

   - Traverse the sorted `delta` array in steps of 2.
   - For each pair, if the sum of the pair is positive, add it to `res`.

4. **Return the Result**:
   - After processing all pairs, return the final value of `res`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n*log(n))` - Sorting the `delta` array takes `O(n log n)` time

- Space-Complexity: `O(n)` - Additional space is used for the `delta` array, which stores `n` integers.