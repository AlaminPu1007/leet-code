## 260. Single Number III

This problem is involved about, Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

**Problem Description :**<br/>
For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/single-number-iii/description/)

**Algorithm :**<br/>

-   create a key-value pairs using hash-map
-   iterate over the map and check which element has key-value exactly 1, then store them into vector, so on
-   return result

**Complexity Analysis :**<br/>

-   Time-Complexity: `o(n)` - we iterate over the array to making an key-value pair, that takes `O(n)` and again we iterate over the hash-map, that also takes `O(n)` times. Overall time complexity is `O(n) + O(n) -> O(n)`
-   Space-Complexity: `O(N)` - we are using an extra hash-map to store key-value pairs of each items
