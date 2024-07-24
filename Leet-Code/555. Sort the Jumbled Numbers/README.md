# 2191. Sort the Jumbled Numbers

This problem involved about, you are given a 0-indexed integer array mapping which represents the mapping rule of a shuffled decimal system. mapping[i] = j means digit i should be mapped to digit j in this system.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/sort-the-jumbled-numbers/description)

**Approach :**<br/>

1. Iterate over the `nums` array, convert each num into string by calling `getCurrentString()` method using `mapping` vector array.
2. Then revert back to number and create a pairs with index
3. Now sort the `pairs` array
4. Iterate over the `pairs` and get number according to sorted order

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting required `O(n * log(n))` time complexity.

-   Space-Complexity: `O(n)` - We are using an extra `pairs` spaces.