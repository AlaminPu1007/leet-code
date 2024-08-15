# 132. Palindrome Partitioning II

This problem involved about, given a string s, partition s such that every substring of the partition is a palindrome.<br/>
Return the minimum cuts needed for a palindrome partitioning of s.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/palindrome-partitioning-ii/description/)

**Approach (Accepted) :**<br/>

1. **Initialize the main function `minCut`**:

    - Takes a string `s` and returns the result of the recursive function `recursive_mcm`.
    - Initializes a memoization array `dp` to store intermediate results and avoid redundant calculations.

2. **Recursive Function `recursive_mcm`**:

    - Takes the string `s`, starting index `i`, and ending index `j`.
    - **Base Case**:
        1. If `i >= j`, return 0 because a single character or an empty substring is already a palindrome.
    - **Palindrome Check**:
        1. If the substring from `i` to `j` is a palindrome (using `isPalindrome` helper function), return 0 because no cut is needed.
    - **Memoization Check**:
        1. If the result for the current `i` is already computed, return the stored value from `dp[i]`.
    - **Recursive Case**:
        1. Initialize `ans` to the maximum possible value.
        2. Iterate over possible partition points `k` from `i` to `j-1`.
        3. If the left partition `(i to k)` is a palindrome, recursively calculate the minimum cuts needed for the right partition `(k+1 to j)`:
            - `recursive_mcm(s, k + 1, j)` for the right partition.
            - Add 1 to the sum of cuts for the right partition, and update `ans` with the minimum value.
    - Store the result in `dp[i]` to avoid redundant calculations in future calls.

3. **Palindrome Check Function `isPalindrome`**:

    - Checks if the substring from index `i` to `j` is a palindrome by comparing characters from both ends moving towards the center.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - due to the nested recursive calls and palindrome checks.

-   Space-Complexity: `O(n)` - for the recursion stack and memoization array.

**References :**<br/>

-   [Learn MCM (Root solution of this type of problem)](https://github.com/AlaminPu1007/Data-structure-Algorithm/tree/master/DataStructure%20%26%20Algorithm/dynamic%20programming/Matrix%20chain%20multiplication/Root%20MCM%20Format)