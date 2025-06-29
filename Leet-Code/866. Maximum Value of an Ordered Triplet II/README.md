# 2874. Maximum Value of an Ordered Triplet II

This problem involved about, you are given a 0-indexed integer array `nums`.
Return the maximum value over all triplets of indices `(i, j, k)` such that `i < j < k`. If all such triplets have a negative value, return 0.

## problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-ii/description)

**Key Optimizations :**<br/>

1. `Single Pass Calculation`: Compute both prefix maximums (leftMax) and suffix maximums (rightMax) in a single loop each.
2. `Space Efficiency`: Use the input array size to store intermediate results without additional data structures.
3. `Early Termination`: The solution naturally handles edge cases (n < 3) by returning 0 immediately.

**Optimized Algorithm Steps :**<br/>

1. `Initialize Arrays`: Create `leftMax` and `rightMax` arrays of size `n`.
2. `Compute leftMax`: In forward pass, store maximum values up to each index.
3. `Compute rightMax`: In backward pass, store maximum values from each index to end.
4. `Calculate Triplets`: For each middle element `j`, compute the triplet value using precomputed max values.
5. `Return Result`: Track and return the maximum triplet value found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - During the traversal of the array, the prefix and suffix arrays can be maintained, thus achieving a single traversal.
-   Space-Complexity: `O(n)` - Two arrays are needed to maintain the maximum and minimum values of the prefixes and suffixes.
