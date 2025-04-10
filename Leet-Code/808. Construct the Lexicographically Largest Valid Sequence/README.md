# 1718. Construct the Lexicographically Largest Valid Sequence

This problem involved about, given an integer n, find a sequence that satisfies all of the following.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/construct-the-lexicographically-largest-valid-sequence/description)

**Approach :**<br/>

1. `Backtracking with Pruning`:

    - Try placing numbers in `descending` order (`n` to `1`).
    - Ensure that each number is placed in a valid position.
    - If the placement violates constraints, `backtrack` and try another number.

2. `Tracking Used Numbers`:

    - Maintain a `set<int>` to keep track of visited numbers.

3. `Recursive Function (Backtracking)`:
    - Base case: If the sequence is completely filled, return `true`.
    - Try placing each number `num` from `n` down to `1`:
        1. If `num > 1`, ensure `res[i + num]` is available.
        2. Mark `num` as used and place it in the sequence.
        3. Recursively call for the next available position.
        4. If a valid sequence is found, return `true`.
        5. Otherwise, backtrack.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n!)` - The recursive function generates permutations by exploring all possible ways to arrange a set of numbers.
-   Space-Complexity: `O(n)` - or the result vector and visited set. The recursion depth is bounded by `n`.
