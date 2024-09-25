# 3101. Count Alternating Subarrays

This problem involved about, You are given a binary array nums.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-alternating-subarrays/description/)

**Approach :**<br/>

1. `Initialize Variables :`

    - Initialize `res` to store the count of alternating subarrays.
    - Initialize `l` (left pointer) to 0, representing the start of the current subarray.
    - Initialize `n` to the size of the array.

2. `Traverse the Array :`

    - Iterate over each element in the array using a right pointer `r`.
    - For each element, check if the current subarray (from `l` to `r`) alternates between two distinct values:
        - If the current element is the same as the previous element, adjust the left pointer `l` to start a new subarray.
        - Otherwise, update the result `res` by adding the length of the current subarray.

3. `Calculate Subarrays :`
    - The number of valid subarrays ending at position `r` is `(r - l + 1)`.

**Algorithm :**<br/>

1. `Initialization :`

    - Initialize `res`, `l`, and `n`.

2. `Array Traversal :`

    - Iterate over the array using the right pointer `r`.
    - Adjust the left pointer `l` if the current subarray is not alternating.
    - Update the result `res` with the count of valid subarrays.

3. `Return Result :`
    - Return the final count of alternating subarrays stored in `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of elements in the array, due to the single pass through the array.
-   Space-Complexity: `O(n)` - as no additional space is used other than the variables for counting subarrays.
