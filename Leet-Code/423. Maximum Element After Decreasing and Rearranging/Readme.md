## 1846. Maximum Element After Decreasing and Rearranging

This problem involved about, You are given an array of positive integers arr. Perform some operations (possibly none) on arr so that it satisfies these conditions:<br/>

    1. The value of the first element in arr must be 1.
    2. The absolute difference between any 2 adjacent elements must be less than or equal to 1. In other words, abs(arr[i] - arr[i - 1]) <= 1 for each i where 1 <= i < arr.length (0-indexed). abs(x) is the absolute value of x.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/description)

**Approach :**<br/>

1. Sort arr in ascending order.
2. Initialize ans = 1.
3. Iterate i over the indices of arr, starting from i = 1 :
    - If arr[i] >= ans + 1, increment ans

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - We sort arr which costs `O(n⋅log⁡n)`
-   Space-Complexity: `O(n)` - sorting has `O(n)` space complexity
