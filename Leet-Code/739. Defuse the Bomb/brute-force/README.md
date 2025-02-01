# 1652. Defuse the Bomb

This problem involved about, you have a bomb to defuse, and your time is running out! Your informer will provide you with a circular array code of length of n and a key k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/defuse-the-bomb/description/)

**Approach :**<br/>

1. `Special Case`:

    - If `k == 0`, return an array of zeros of the same length.

2. `Iterate Through Array`:

    - For each index `i`, calculate the sum of either:
        - The next `k` elements if `k > 0`.
        - The previous `|k|` elements if `k < 0`.
    - Use modular arithmetic to handle circular indexing:
        - `j % n` for forward indices.
        - `(j + n) % n` for backward indices.

3. `Store Results`:
    - Replace each element with the calculated sum.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * k)` - Outer loop iterates `n` times , Inner loop iterates `|k|`
-   Space-Complexity: `O(n)` - for res array
