# 916. Word Subsets

This problem involved about, you are given two string arrays words1 and words2.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/word-subsets/description/)

**Approach :**<br/>

1. `Character Frequency Requirement`:
    - Each string in `words1` must contain all the characters from every string in `words2`, with at least the required frequency.

2.`**Optimization with Aggregate Frequency`:

-   Instead of comparing each string in `words2` to each string in `words1`, compute the `maximum frequency requirements` of characters across all strings in `words2`.

3. `Steps`:
    - Compute the maximum frequency of each character across all strings in `words2`.
    - For each string in `words1`, check if it satisfies the aggregated frequency requirements.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - where `n` and `m` is the total amount of information in A and B respectively.
-   Space-Complexity: `O(n)` - We are using an extra map data structures
