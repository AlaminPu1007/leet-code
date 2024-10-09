# 945. Minimum Increment to Make Array Unique

This problem involved about, you are given an integer array `nums`. In one move, you can pick an index `i where 0 <= i < nums.length` and increment `nums[i]` by 1.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-increment-to-make-array-unique/description/)

**Approach :**<br/>

1. **Initialization:**

    - Determine the length `n` of the array.
    - Initialize a variable `res` to store the total number of increments needed.
    - Sort the array `nums`.

2. **Iterate Through Array:**

    - Start from the second element (index 1) and iterate to the end of the array.
    - For each element `nums[i]`, if `nums[i-1]` is greater than or equal to `nums[i]`, calculate the minimum increment needed:
        - Set `minIncrement` to `(nums[i-1] + 1) - nums[i]`.
        - Add `minIncrement` to `res`.
        - Update `nums[i]` to `nums[i-1] + 1`.

3. **Return Result:**
    - The variable `res` will contain the total number of increments needed to make the array unique.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the array takes `O(n log n)`
-   Space-Complexity: `O(n)` - sorting required extra spaces
