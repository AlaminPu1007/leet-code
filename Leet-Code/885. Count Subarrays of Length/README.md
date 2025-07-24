# 3392. Count Subarrays of Length Three With a Condition

This problem involved about, given an integer array `nums`, return the number of `subarrays` of length 3 such that the sum of the first and third numbers equals exactly half of the second number.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition)

**Key Insights :**<br/>

1. `Subarray Definition`: We're only considering `subarrays` of length 3 (triplets)
2. `Middle Element Check`: For each middle element in the array (excluding first and last), verify the condition
3. `Simple Iteration`: Can be solved with a single pass through the array

**Algorithm Steps :**<br/>

1. `Initialize Counter`: Start with res = 0
2. `Iterate Through Array`:
    - For each element from index 1 to n-2 (middle elements)
    - Check if `nums[i] == 2*(nums[i-1] + nums[i+1])`
    - Increment counter if condition is met
3. `Return Result`: Total count of valid `subarrays`

**Approach :**<br/>

-   Time-Complexity: `O(n)` - We iterate over the array one times.
-   Space-Complexity: `O(n)` - We are not using any kind of extra spaces that will grow according to input size.
