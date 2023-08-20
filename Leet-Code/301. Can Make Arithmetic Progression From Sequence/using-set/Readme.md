## 1502. Can Make Arithmetic Progression From Sequence

This problem is involved about, A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

**Problem Description :**<br/>
For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/)

**Approach :**<br/>

-   Find the minimum value min_value and the maximum value max_value of arr, let n be the length of arr.
-   Check if max_value - min_value is divisible by n - 1, return false if not. Otherwise, set `diff = (max_value - min_value) / (n - 1)`
-   Initialize an empty set `st`
-   Iterate over arr, for each number `arr[i]`, Check if `arr[i] - min_value` is divisible by `diff`, return `false` if not and add `arr[i]` to `st`
-   Return true if the size of st equals n, return false otherwise

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Finding the minimum and maximum values takes `O(n)` time.We iterate over arr, for each element `arr[i]`, we verify if it belongs to the arithmetic sequence then add it to the hash set, which takes `O(1)` time.

-   Space-Complexity: `O(n)` - We create a set to store all visited elements, there might be at most `n` distinct elements in the set
