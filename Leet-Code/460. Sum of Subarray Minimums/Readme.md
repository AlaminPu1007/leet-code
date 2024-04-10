## 907. Sum of Subarray Minimums

This problem involved about, given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) `subarray` of arr. Since the answer may be large, return the answer modulo 109 + 7.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/sum-of-subarray-minimums/description/)

**Approach :**<br/>

1. Calculate `NSL` and `NSR` arrays using helper functions.
2. Iterate through each element in the array.
    - Calculate the number of `subarrays` for which the current element is the minimum element.
    - Update the sum with the calculated value for each element.
3. Return the final sum.

**`getNSL()`:**<br/>

-   Calculates the index of the next smaller element to the left for each element in the array.

**`getNSR()`:**<br/>

-   Calculates the index of the next smaller element to the right for each element in the array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the size of the input array.
-   Space-Complexity: `O(n)` -due to additional space used for `NSL` and `NSR` arrays.
