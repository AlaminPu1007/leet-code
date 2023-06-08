## 442. Find All Duplicates in an Array

This problem is involved about, given an integer array `nums` of length n where all the integers of `nums` are in the range `[1, n]` and each integer appears once or twice, return an array of all the integers that appears twice.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/find-all-duplicates-in-an-array/).

**Complexity Analysis :**<br/>

-   Learn similar approach from [git-hub](https://github.com/AlaminPu1007/leet-code/tree/master/Leet-Code/261.%20Find%20the%20Duplicate%20Number)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each element is visited at most twice (once in the first loop to find the duplicate and once in the second loop to restore the numbers).
-   Space-Complexity: `O(n)` - we need an extra array to store all duplicate items.
