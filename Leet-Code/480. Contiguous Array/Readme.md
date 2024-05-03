## 525. Contiguous Array

Thi problem involved about, given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/contiguous-array/description/)

**Approach :**<br/>

1. Initialize variables to keep track of the count of 0s, 1s, and the maximum length of subarrays with equal numbers of 0s and 1s.
2. Initialize an unordered map to store the difference between the count of 1s and 0s encountered so far along with their corresponding indices.
3. Iterate through the input array:
    - Increment the count of 1s if the current element is 1, or increment the count of 0s if it's 0.
    - Calculate the difference between the count of 1s and 0s encountered so far.
    - If the difference is not present in the map, store it along with its index.
    - If the count of 1s equals the count of 0s, update the result to the current sum of 1s and 0s (maxLength).
    - If the difference is present in the map, update the result by taking the maximum of the current result and the difference between the current index and the index stored in the map for that difference.
4. Return the result, which represents the maximum length of subarrays with equal numbers of 0s and 1s.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the array once, performing constant-time operations within the loop. Therefore, the time complexity is `O(n)`.

-   Space-Complexity: `O(n)` - We are using an extra hash-map.
