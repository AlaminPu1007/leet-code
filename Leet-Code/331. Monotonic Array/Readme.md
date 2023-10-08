## 896. Monotonic Array

This problem involved about, an array is monotonic if it is either monotone increasing or monotone decreasing. Given an integer array `nums`, return true if the given array is monotonic, or false otherwise.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/monotonic-array/description)

**Approach:**<br/>

-   Initialize `isIncreasing`, `isDecreasing` to `false` to detect monotonic order of given array
-   if array is an increasing order mark `isDecreasing` to `false`
-   if array is an decreasing order mark `isIncreasing` to `false`
-   if any of them is `true` return `false`
-   return true

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the `nums` array, that cause of `O(n)` times, update `isIncreasing`, `isDecreasing` to `false` has constant time `O(1)`

-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces that would increase with input value except constant
