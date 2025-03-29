# 3151. Special Array I

This problem involved about, an array is considered special if every pair of its adjacent elements contains two numbers with different parity.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/special-array-i/description)

**Approach :**<br/>

### Step 1: Handle Edge Case

-   If `nums` has `0 or 1 elements`, return `true` because there are no adjacent pairs to check.

### Step 2: Iterate Over the Array

-   Loop through the array from index `0` to `n-2`.
-   For each adjacent pair:
    -   If both numbers are `even`, return `false`.
    -   If both numbers are `odd`, return `false`.

### Step 3: Return the Result

-   If the loop completes without finding any violations, return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We iterate through `nums` once, checking adjacent elements.
-   Space-Complexity: `O(1)` - We use only a few integer variables.
