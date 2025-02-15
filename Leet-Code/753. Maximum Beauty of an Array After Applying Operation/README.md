# 2779. Maximum Beauty of an Array After Applying Operation

This problem involved about, you are given a 0-indexed array `nums` and a non-negative integer k.

## Problem description

For better problem description, please visit [https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/description]

**Approach :**<br/>

1. `Sort the Array`:

    - Sorting ensures that for any subarray, the minimum value is always the first element, and the maximum value is the last element.

2. `Sliding Window`:

    - Use a two-pointer sliding window to find the maximum subarray where the difference between the maximum and minimum values is `2*k`.
    - Maintain a left pointer `l` to mark the beginning of the valid window.

3. `Iterate Over the Array`:
    - For each element at index `i`, check if the difference between `nums[i]` (current maximum) and `nums[l]` (current minimum) is within `( 2 * k )`:
        - If not, increment `l` to shrink the window.
    - Update the result `res` to store the maximum size of the valid window.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the array takes
-   Space-Complexity: `O(1)` - No additional space is used
