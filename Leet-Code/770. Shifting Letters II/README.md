# 2381. Shifting Letters II

This problem involved about, you are given a string s of lowercase English letters and a 2D integer array shifts where `shifts[i] = [starti, endi, directioni]`. For every i, shift the characters in s from the index `starti` to the index `endi` (inclusive) forward if `directioni` = 1, or shift the characters backward if `directioni = 0`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/shifting-letters-ii/description/?)

**Approach :**<br/>

1. `Initialize Arrays`:

    - Convert the string `s` into an integer array `arr` where each letter is represented by its 0-indexed position (`'a' = 0`, `'b' = 1`, ..., `'z' = 25`).
    - Initialize a `prefixArr` array to store the cumulative shifts at each index. This array helps in efficiently applying multiple shifts.

2. `Apply Shift Operations`:

    - For each shift operation, update the `prefixArr`:
        - If the operation is a right shift (`direction = 1`), increment the start index of the shift and decrement the index after the end.
        - If the operation is a left shift (`direction = -1`), decrement the start index and increment the index after the end.
    - The `prefixArr` stores the cumulative shift differences, which are later used to determine the net shift for each character.

3. `Calculate the Final Shifts`:

    - Traverse through `prefixArr` and accumulate the shift values.
    - For each character in `arr`, apply the final computed shift, ensuring that shifts are wrapped around the alphabet using modulo 26.

4. `Construct the Result`:
    - Convert the modified integer values back to characters and reconstruct the string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string.
-   Space-Complexity: `O(n)` - The space required for `arr`, `prefixArr`.
