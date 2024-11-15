# 2490. Circular Sentence

This problem involved about, a sentence is a list of words that are separated by a single space with no leading or trailing spaces.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/circular-sentence/description/)

**Approach :**<br/>

1. `Edge Condition`: First, ensure that the last character of the sentence matches the first character. If not, return `false`.

2. `Iterate Through the Sentence`:

    - Loop through each character in `sentence`.
    - For each space character, check if the last character of the previous word matches the first character of the next word.
    - If any word fails this condition, return `false`.

3. `Return True`: If all checks pass, the sentence is circular.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of `sentence` (we iterate once).

-   Space-Complexity: `O(1)` - as we use only a few extra variables.
