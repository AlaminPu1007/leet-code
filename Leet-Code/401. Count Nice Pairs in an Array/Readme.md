## 1814. Count Nice Pairs in an Array

This problem involved about, you are given an array nums that consists of non-negative integers. Let us define rev(x) as the reverse of the non-negative integer x. For example, rev(123) = 321, and rev(120) = 21.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/count-nice-pairs-in-an-array/description/)

**Approach :**<br/>

1. Implement the function rev as described by the problem description.
2. Create arr, where `arr[i] = nums[i] - rev(nums[i])`
3. Initialize an empty hash map Map and the answer variable, `ans`.
4. Iterate over each num in arr:
    - Add `Map[num]` to `ans`.
    - Increment `Map[num]`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n) => O(n)` - create an reverse array & iterate over the reverse array has `O(n)` time complexity
-   Space-Complexity: `O(n)` - we are using an extra `revArr` & `Map`
