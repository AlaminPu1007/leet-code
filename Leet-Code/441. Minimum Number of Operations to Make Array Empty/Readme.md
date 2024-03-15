## 2870. Minimum Number of Operations to Make Array Empty

This problem involved about, you are given a 0-indexed array nums consisting of positive integers.<br/>

There are two types of operations that you can apply on the array any number of times: <br/>

    - Choose two elements with equal values and delete them from the array.
    - Choose three elements with equal values and delete them from the array.

Return the minimum number of operations required to make the array empty, or -1 if it is not possible.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/description/)

**Approach :**<br/>

1. Initialization:

    - The `minOperations` function calculates the minimum number of operations required to make an array equal.
    - The operation involves incrementing or decrementing any element by 1.

2. Count Frequency:

    - Create an unordered_map `Map` to store the frequency of each unique element in the input array.
    - Traverse the input array and update the frequency in the map.

3. Calculate Operations:

    - Traverse the map and for each unique element, calculate the number of operations required to make its occurrences equal.
    - The formula for operations is `ceil(item.second / 3)`, where `item.second` is the frequency of the element.
    - Accumulate the total number of operations in the variable `res`.

4. Result:
    - The `minOperations` function returns the total number of operations stored in the variable `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n) + O(n)` - where N is the size of the input array. The loop traverses the array once.
-   Space-Complexity:`O(n)` - the number of unique elements in the input array
