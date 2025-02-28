# 2559. Count Vowel Strings in Ranges

This problem involved about, you are given a 0-indexed array of strings words and a 2D array of integers queries.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-vowel-strings-in-ranges/description/)

**Approach :**<br/>

1. `Preprocessing with Prefix Sum`:

    - Use a prefix sum array to store cumulative counts of valid words.
    - For each word in `words`:
        1. Check if the first and last characters are vowels using a hash set for fast lookup.
        2. If valid, add `1` to the prefix sum; otherwise, add `0`.

2. `Query Resolution`:

    - For each query `[l, r]`:
        - Use the prefix sum array to calculate the count of valid words in the range:

3. `Efficiency`:
    - The prefix sum array allows each query to be resolved in \(O(1)\) time.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterating over `words` to compute the prefix sum takes `O(n)`.
-   Space-Complexity: `O(n)` - Prefix Sum Array required `O(n)` spaces.
