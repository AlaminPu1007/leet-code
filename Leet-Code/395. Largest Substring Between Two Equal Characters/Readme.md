## 1624. Largest Substring Between Two Equal Characters

This problem involved about, given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1. <br/>

A substring is a contiguous sequence of characters within a string. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/largest-substring-between-two-equal-characters/description/)

**Approach :**<br/>

To solved this problem, we need an additional `hash-map` data structure. <br/>
we always push the character of given string into `map`. Before push it, we always check this character already in out map or not.
if it's then we will calculate it's largest substring and avoid to push it map again.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterate over the string and push into map, required `O(n)` time complexity
-   Space-Complexity: `O(n)` - we are using an extra map data-structure
