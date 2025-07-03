# 3396. Minimum Number of Operations to Make Elements in Array Distinct

This problem involved about, you are given an integer array `nums`. You need to ensure that the elements in the array are distinct. To achieve this, you can perform the following operation any number of times:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/)

**Key Insights :**<br/>

1. `Sorting`: Sorting the array helps identify duplicates efficiently.
2. `Greedy Adjustment`: For each duplicate, increment it to the smallest possible value that hasn't been used yet.
3. `Tracking Used Values`: Maintain a set or variable to track the next available unique value.

**Algorithm Steps :**<br/>

1. `Sort the Array`: This allows sequential processing of elements.
2. `Initialize Minimum Value`: Start with the smallest possible value (or first element).
3. `Process Elements`:
    - If current element is less than the minimum required unique value, increment operations by the difference.
    - Update the minimum required unique value for next element.
4. `Return Total Operations`: The accumulated operations count is the answer.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - Each time it is necessary to check for duplicate elements in the remaining array, the maximum time required is `O(n)`. A total of up to n checks are needed, so the total time is `O(n^2)`.
-   Space-Complexity: `O(n)` - Each time we check whether an array contains duplicate elements, a hash table needs to be used to record the elements that have already appeared.
