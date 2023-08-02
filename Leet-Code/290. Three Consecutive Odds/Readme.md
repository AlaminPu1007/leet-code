## 1550. Three Consecutive Odds

This problem involve about, given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/three-consecutive-odds/description/)

**Algorithm :**<br/>

-   loop through root array, and check i && i+1 && i+2 element has consecutive element
-   return true,
-   other wise return flse

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the root array, it will take `O(n)` times
-   Space-Complexity: `O(1)` - we are not using any extra space
