## 300. Longest Increasing Subsequence

This problem involved about, given an integer array `nums`, return the length of the longest strictly increasing
subsequence

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/longest-increasing-subsequence/description/)

**Approach :**<br/>

1. Initialization:

    - The `lengthOfLIS` function calculates the length of the Longest Increasing Subsequence (LIS) in the given array.

2. Dynamic Programming (Bottom-Up):

    - Utilize a bottom-up dynamic programming approach.
    - Initialize a vector `dp` of size `n` (length of `nums`) with all values set to 1.
        - Each element in `dp` represents the length of the LIS ending at that particular index.

3. Calculate LIS Length:

    - Traverse the array in reverse order (`i` from `n-1` to `0`).
    - For each index `i`, iterate over the elements to its right (`j` from `i+1` to `n-1`).
    - If `nums[i] < nums[j]`, update `dp[i]` by taking the maximum of its current value and `1 + dp[j]`.
        - This ensures that we consider increasing subsequences ending at `i`.

4. Find Maximum Length:

    - Iterate over the `dp` array and find the maximum value, which represents the overall LIS length.

5. Result:
    - The `lengthOfLIS` function returns the length of the Longest Increasing Subsequence stored in the variable `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - where N is the length of the input array `nums`. The nested loops traverse the array and compute LIS values.
-   Space-Complexity: `O(n)` -where N is the length of the input array `nums`. The additional space is used for the `dp` array.
