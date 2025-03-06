# 3042. Count Prefix and Suffix Pairs Ii

This problem involved about, you are given a 0-indexed string array words.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/description/)

**Approach :**<br/>

1. `Iterate Over All Pairs`:

    - For each pair of strings `((i, j)) with (i < j)`, check the following:
        - If the size of `words[i]` is greater than `words[j]`, skip the pair since `words[i]` cannot be a prefix or suffix.

2. `Check Prefix-Suffix Conditions`:

    - Use the `find` function to check if `words[i]` is a prefix of `words[j]`.
    - Use the `rfind` function to check if `words[i]` is a suffix of `words[j]`.

3. `Count Valid Pairs`:

    - Increment the count if both conditions are satisfied.

4. `Return Result`:
    - Return the total count of valid prefix-suffix pairs.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2 * m)` - where `m` is the average length of the words to check prefix & suffix.Using nested loop to cost `O(n^2)`.
-   Space-Complexity: `O(1)` - The algorithm uses constant auxiliary space.
