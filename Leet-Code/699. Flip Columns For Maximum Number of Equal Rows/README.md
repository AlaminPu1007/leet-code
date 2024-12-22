# 1072. Flip Columns For Maximum Number of Equal Rows

This problem involved about, you are given an m x n binary matrix matrix.
You can choose any number of columns in the matrix and flip every cell in that column (i.e., Change the value of the cell from 0 to 1 or vice versa).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/flip-columns-for-maximum-number-of-equal-rows/description)

**Approach :**<br/>

1. `Key Observation`:

    - Two rows can be made identical if, for any column, both rows have either the same value or the exact opposite value.
    - If a row starts with `1`, flipping its columns makes it equivalent to a row starting with `0`.

2. `Normalization`:

    - Convert each row to a `canonical form`:
        - If a row starts with `1`, invert all bits to simulate a flip.
        - If a row starts with `0`, keep it as is.
    - Use this canonical form as a key in a hash map to count similar rows.

3. `Counting Groups`:
    - Group rows by their canonical forms and count the maximum frequency of any group.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - Each row is processed once, and each element in a row contributes to forming the key.
-   Space-Complexity: `O(m * n)` - Space required for storing the hash map keys.
