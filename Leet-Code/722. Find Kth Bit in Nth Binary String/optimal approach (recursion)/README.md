# 1545. Find Kth Bit in Nth Binary String

This problem involved about, given two positive integers n and k, the binary string Sn is formed as follows:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/description)

**Approach :**<br/>

Instead of building the entire string, we can use recursion to directly find the k-th bit in logarithmic time based on the observation that:

-   Each string is symmetric around its midpoint.
-   The value at the midpoint is always `'1'`.
-   The right half of the string is the inverse of the left half in reverse order.

#### Recursive Breakdown:

1. `Base Case`: If `n = 1`, the string `S1` is just `"0"`, so return `'0'`.
2. `Midpoint Calculation`: For a string of length `2^n - 1`, the midpoint is at index `(2^n - 1) / 2 + 1` (1-based index).
3. `Recursive Case`:
    - If `k` is less than the midpoint, the k-th bit lies in the left half of the previous string, so recurse with `n-1` and `k`.
    - If `k` is greater than the midpoint, the k-th bit lies in the mirrored and inverted right half of the previous string. The mirrored position is calculated as `len - k + 1` where `len = 2^n - 1`, and then the result is inverted.
    - If `k` is at the midpoint, return `'1'`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - due to the recursive calls decreasing `n` at each step, leading to at most `n` recursive calls.

-   Space-Complexity: `O(n)` - due to the recursive call stack
