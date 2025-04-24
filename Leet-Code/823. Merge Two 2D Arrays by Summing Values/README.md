# 2570. Merge Two 2D Arrays by Summing Values

This problem involved about, you are given two 2D integer arrays `nums1` and `nums2`.<br/>

-   `nums1[i] = [idi, vali]` indicate that the number with the id idi has a value equal to `vali`.
-   `nums2[i] = [idi, vali] `indicate that the number with the id idi has a value equal to `vali`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given two 2D arrays, `nums1` and `nums2`, where each `subarray` contains an ID and a value.
    - The goal is to merge the two arrays such that:
        - If an ID exists in both arrays, their values are summed.
        - The result should be sorted by ID.

2. `Algorithm`:

    - Use a `map` to store the IDs as keys and their corresponding values as values.
    - Iterate through `nums1` and `nums2`, updating the map with the sum of values for each ID.
    - Convert the map into a 2D vector, ensuring the result is sorted by ID.

3. `Steps`:
    1. Initialize a map `Map` to store IDs and their summed values.
    2. Iterate through `nums1`:
        - For each `subarray`, add the value to the corresponding ID in the map.
    3. Iterate through `nums2`:
        - For each `subarray`, add the value to the corresponding ID in the map.
    4. Convert the map into a 2D vector `res`:
        - Each entry in the map becomes a `subarray` in `res`.
    5. Return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where `n` is the size of the arrays. Inserting elements into the map takes `O(log(n))` per operation.
-   Space-Complexity: `O(n)` - Due to the map.
