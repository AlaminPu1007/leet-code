## 2744. Find Maximum Number of String Pairs

This problem involved about, you are given a 0-indexed array words consisting of distinct strings.Return the maximum number of pairs that can be formed from the array words.

# Problem description

For better explanation of problem, please visit [LeetCode Pages](https://leetcode.com/problems/find-maximum-number-of-string-pairs/description/)

**Algorithm :**<br/>

-   Check out similar approach from [GitHub Page](https://github.com/AlaminPu1007/leet-code/blob/master/Leet-Code/113.%20Group%20Anagrams/Group_Anagrams.cpp)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - since we iterate over the array, that may cost to `O(n)` times, `SortString` method has constant time complexity.
-   Space-Complexity: `O(n)` - we are using an extra hash-map data structure, and `SortString` has constant space
