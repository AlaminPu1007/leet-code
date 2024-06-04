## 179. Largest Number

This problem involved about, Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/largest-number/description/)

**Approach :**<br/>

1. Define a static comparison function `compare` that takes two integers `a` and `b`.
    - Convert `a` and `b` to strings and concatenate them in two different orders: `ab` and `ba`.
    - Return true if `ab` is greater than `ba`, indicating that `a` should come before `b` in the sorted array.
2. In the `largestNumber` function:
    - Sort the array of numbers using the custom comparison function `compare`.
    - Concatenate the sorted numbers to form the largest possible number.
    - If the first character of the resulting string is '0', return "0" (to handle the case when the largest number is 0).
    - Otherwise, return the constructed string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n log n)` - The time complexity of the sorting algorithm dominates the time complexity of this approach. Assuming the sorting algorithm has a time complexity of `O(n log n)`, where n is the number of elements in the array.

-   Space-Complexity: `O(n)` - The space complexity is O(n), where n is the number of elements in the array. This space is used to store the sorted array and the resulting string.
