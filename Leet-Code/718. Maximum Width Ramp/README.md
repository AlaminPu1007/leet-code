# 962. Maximum Width Ramp

This problem involved about, a ramp in an integer array `nums` is a pair `(i, j)` for which `i < j and nums[i] <= nums[j]`. The width of such a ramp is `j - i`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-width-ramp/description)

**Approach :**<br/>

The problem can be broken into two phases:

1. `Right-to-Left Scan`:

    - Construct an array `maxSeen` where `maxSeen[i]` holds the maximum value seen in the array from index `i` to the end. This is done by iterating the array from right to left.
    - The array `maxSeen` helps in quickly determining the largest possible `nums[j]` for any index `i`.

2. `Left-to-Right Scan`:
    - Starting from the left of the array (`i = 0`), try to find the smallest `left` index where `nums[left] <= maxSeen[i]`. This ensures the ramp condition `nums[i] <= nums[j]` is satisfied.
    - Calculate the ramp width as `i - left` and update the result `res` with the maximum width found.

**Algorithm :**<br/>

1. `Right-to-Left Pass`:

    - Create an array `maxSeen` where each entry `maxSeen[i]` is the maximum value seen from index `i` to the end of the array.

2. `Left-to-Right Pass`:

    - For each index `i` from left to right, increment the pointer `left` until the condition `nums[left] <= maxSeen[i]` is satisfied. Calculate the width of the ramp and update the result.

3. Return the result `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the array `nums`. The first loop constructs the `maxSeen` array in `O(n)` time, and the second loop finds the maximum width ramp, also in `O(n)` time.

-   Space-Complexity: `O(n)` - for storing the `maxSeen` array, which holds the maximum values from right to left.