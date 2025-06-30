# 368. Largest Divisible Subset

This problem involved about, given a set of distinct positive integers `nums`, return the largest subset answer such that every pair `(answer[i], answer[j])` of elements in this subset satisfies:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/largest-divisible-subset/description/)

**Key Insights :**<br/>

1. `Sorting`: Sorting the array first helps because if `nums[i]` is divisible by `nums[j]`, then `nums[i]` must be greater than or equal to `nums[j]`.
2. `Dynamic Programming`: Use DP to store the size of the largest divisible subset ending at each position.
3. `Backtracking`: After computing DP values, backtrack to construct the actual subset.

**Algorithm Steps :**<br/>

1. `Sort the Array`: Ensures that we only need to check `nums[i] % nums[j] == 0` for `j < i`.
2. `DP Array Initialization`: `dp[i]` stores the size of the largest divisible subset ending at `nums[i]`.
3. `Compute DP Values`: For each `i`, check all previous elements `j` to see if `nums[i]` is divisible by `nums[j]` and update `dp[i]` accordingly.
4. `Track Maximum Subset`: Keep track of the maximum size and its ending index.
5. `Backtrack to Construct Subset`: Starting from the element with the maximum `dp` value, add elements to the subset if they divide the next element in the subset.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - due to nested recursive calls or loops.
-   Space-Complexity: `O(n)` - we are an dp array
