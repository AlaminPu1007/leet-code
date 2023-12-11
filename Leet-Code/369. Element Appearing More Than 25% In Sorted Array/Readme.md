## 1287. Element Appearing More Than 25% In Sorted Array

This problem involved about, given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description)

**Approach :**<br/>

1. Initialize variables count, res, and maxValue.
    - count: Keeps track of the current consecutive occurrences of the same element.
    - res: Stores the potential special integer.
    - maxValue: Keeps track of the maximum count encountered so far.
2. Iterate through the elements of the vector starting from index 1:
    - If the current element is equal to the previous element, increment the count.
    - If the current element is different from the previous element, reset count to 1.
    - f the current count is greater than the current maxValue, update maxValue and set res to the current element.
3. Return the final value of res as the special integer.

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n)` - where n is the number of elements in the vector arr. The algorithm iterates through each element of the vector once.
-   Space-Complexity:`O(1)` - as the algorithm uses a constant amount of extra space regardless of the input size.
