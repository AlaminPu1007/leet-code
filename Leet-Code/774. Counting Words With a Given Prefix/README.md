# 2185. Counting Words With a Given Prefix

This problem involved about, you are given an array of strings words and a string pref.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/counting-words-with-a-given-prefix/description/)

**Approach :**<br/>

1. `Initialize Count`:

    - Create a counter `count` initialized to 0.

2. `Iterate Through Words`:

    - For each word in `words`, check if `pref` is a prefix of the word:
        - Use the `find` function to check if the prefix occurs at position 0.

3. `Increment Count`:

    - If the prefix matches, increment the counter.

4. `Return Result`:
    - Return the total count.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - Checking the prefix for each word takes `O(m)` and iterate over the original words takes `O(n)`.
-   Space-Complexity: `O(1)` - The algorithm uses constant auxiliary space.
