# 2452. Words Within Two Edits of Dictionary

This problem involved about, you are given two string arrays, queries and dictionary. All words in each array comprise of lowercase English letters and have the same length.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/words-within-two-edits-of-dictionary/description)

**Approach :**<br/>

1. Initialize an empty result list `res`.

2. For each query string `q`:
    - Compare it with every string `d` in `dictionary`.
    - Count the number of positions where characters differ.

3. If the difference count is `≤ 2`:
    - Add `q` to the result.
    - Break early (no need to check further dictionary words).

4. Return the result list.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m * l)` - We iterate over the `query`, `dictionary` array. Then check miss match between this two word's.
- Space-Complexity: `O(n)` - For resulting array `res`.
