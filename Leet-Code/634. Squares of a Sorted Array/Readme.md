## 977. Squares of a Sorted Array

This problem involved about, given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/squares-of-a-sorted-array/description/)

**Approach - (Sorting):**<br/>

1. Iterate through the given array of integers `nums` and square each element to obtain its square value.
2. Store the squared values in a new array `ans`.
3. After obtaining the squared values, sort the array `ans` in non-decreasing order.
4. Return the sorted array `ans` as the result.

**Complexity Analysis - (Sorting):**<br/>

-   Time-Complexity: `O(n * log(n))` - after making square of each number and sorting them into ascending orders, required `O(n*log(n))` time complexity.
-   Space-Complexity: `O(n)` - sorting requires extra spaces

**Approach - (Optimal Solution):**<br/>

1. Iterate through the given array `nums` and square each element in-place.
2. Create a new array `ans` of size `n`.
3. Use two pointers, `left` and `right`, initialized to the start and end of the squared array, respectively.
4. Traverse the squared array in reverse order:
    - Compare the squared values at indices `left` and `right`.
    - Place the larger squared value at the current index `i` in the `ans` array.
    - Move the corresponding pointer (`left` or `right`) towards the center of the array based on the comparison result.
5. Return the resulting array `ans`.

**Complexity Analysis - (Optimal Solution):**<br/>

-   Time-Complexity: `O(n) + O(n)` - square each element takes `O(n)` time and to fill the `ans` array with sorted squared values also takes O(n) time.
-   Space-Complexity: `O(n)` - We use an additional array `ans`
