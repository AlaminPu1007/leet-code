## 2733. Neither Minimum nor Maximum

This problem is involved about, given an integer array nums containing distinct positive integers, find and return any number from the array that is neither the minimum nor the maximum value in the array, or -1 if there is no such number.
Return the selected integer.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/neither-minimum-nor-maximum/description/)

**Algorithm :**<br/>

-   The approach is very simple, if we get the array length less than or equal to `2`, return `1`
-   Sort the given array, and return any of index except `nums[0] & nums[1]`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(n))` - since we are using sort algorithm, that takes `O(n*log(n))` times complexity
-   Space-Complexity: `O(log(n))` - in c++ sorting array can take `O(log(n))` spaces
