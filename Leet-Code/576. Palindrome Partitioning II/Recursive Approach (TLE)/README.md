# 132. Palindrome Partitioning II

This problem involved about, given a string s, partition s such that every substring of the partition is a palindrome.<br/>
Return the minimum cuts needed for a palindrome partitioning of s.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/palindrome-partitioning-ii/description/)

**Approach (TIME LIMIT EXCEED) :**<br/>

1. Initialize the main function `minCut` which takes a string `s` and returns the result of the recursive function `recursive_mcm`.

2. The `recursive_mcm` function takes the string `s`, starting index `i`, and ending index `j`.

3. **Base Case**:

    - If `i >= j`, return 0 because a single character or an empty substring is already a palindrome.

4. **Palindrome Check**:

    - If the substring from `i` to `j` is a palindrome (using `isPalindrome` helper function), return 0 because no cut is needed.

5. **Recursive Case**:

    - Initialize `ans` to the maximum possible value.
    - Iterate over possible partition points `k` from `i` to `j-1`.
    - Recursively calculate the minimum cuts needed for the left and right partitions:
        1. `recursive_mcm(s, i, k)` for the left partition.
        2. `recursive_mcm(s, k+1, j)` for the right partition.
    - Add 1 to the sum of cuts for the left and right partitions, and update `ans` with the minimum value.

6. The `isPalindrome` function checks if the substring from index `i` to `j` is a palindrome by comparing characters from both ends moving towards the center.

7. Return the final answer stored in `ans`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2 ^ n)` - in the worst case due to the exponential nature of the recursive calls.

-   Space-Complexity: `O(n)` - for the recursion stack

**References :**<br/>

-   [Learn MCM (Root solution of this type of problem)](https://github.com/AlaminPu1007/Data-structure-Algorithm/tree/master/DataStructure%20%26%20Algorithm/dynamic%20programming/Matrix%20chain%20multiplication/Root%20MCM%20Format)