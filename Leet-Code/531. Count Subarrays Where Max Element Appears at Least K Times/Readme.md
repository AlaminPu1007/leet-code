## 2962. Count Subarrays Where Max Element Appears at Least K Times

This problem involved about, you are given an integer array nums and a positive integer k. <br/>

Return the number of subarrays where the maximum element of nums appears at least k times in that subarray.

A subarray is a contiguous sequence of elements within an array.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/)

**Approach :**<br/>

## Count Subarrays with Maximum Element Occurring K Times

This solution aims to find the number of subarrays in a given array `nums` where the maximum element occurs exactly `k` times. It utilizes a sliding window approach to efficiently count the valid subarrays.

### Approach:

1. **Initialization**:

    - Initialize variables `ans` (to store the result) and `left` (the left pointer) to `0`.
    - Find the maximum element in the array `nums` and store it in `maxNum`.

2. **Iterating through the array**:

    - Iterate through the array using the `right` pointer.
    - Check if `nums[right]` is equal to `maxNum`. If so, increment the `count` variable.

3. **Sliding Window Technique**:

    - While `count` is equal to `k`, move the `left` pointer and decrement `count`.
    - This step ensures that we maintain a window where the maximum element occurs exactly `k` times.

4. **Updating the Answer**:

    - Update the `ans` variable by adding the current value of `left`.
    - This step accounts for all valid subarrays ending at the current `right` index.

5. **Return the Answer**:
    - After iterating through the entire array, return the final value of `ans`, which represents the total count of subarrays meeting the conditions.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the array once using the two pointers `left` and `right`, resulting in a time complexity of `O(n)`
-   Space-Complexity: `O(1)` - we are no using any extra spaces
