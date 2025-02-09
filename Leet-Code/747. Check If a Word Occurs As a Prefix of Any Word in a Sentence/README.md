# 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

This problem involved about, given a sentence that consists of some words separated by a single space, and a searchWord, check if searchWord is a prefix of any word in sentence.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/)

**Approach :**<br/>

1. `Splitting the Sentence`:
    - Use a `stringstream` to break the sentence into individual words. This avoids manual splitting and handles spaces efficiently.
2. `Prefix Check`:

    - For each word, compare its starting characters with the `searchWord`:
        - Use `substr` to extract the prefix of the same length as the `searchWord` from the current word.
        - If the prefix matches the `searchWord`, return the current 1-based index.

3. `Increment the Word Index`:

    - Keep track of the current word's index (starting from 1). Increment this index as we process each word.

4. `Return -1 for No Match`:
    - If no word in the sentence starts with `searchWord`, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where n is the length of the sentence. comparing substrings takes `m`

-   Space-Complexity: `O(n)` - where `n` is the number of words in the sentence, to store each word temporarily.
