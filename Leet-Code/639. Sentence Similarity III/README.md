# 1813. Sentence Similarity III

This problem involved about, you are given two strings sentence1 and sentence2, each representing a sentence composed of words. A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of only uppercase and lowercase English characters.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/sentence-similarity-iii/description/)

**Approach :**<br/>

1. `Ensure sentence1 is the shorter sentence`:

    - If `sentence2` is shorter, swap `sentence1` and `sentence2` to make the comparison easier (always work with the longer sentence as `sentence2`).

2. `Split sentences into words`:

    - Use string streams to split both `sentence1` and `sentence2` into words and store them in two `deques` (`s1` and `s2`).

3. `Compare the longest matching prefix`:

    - Starting from the front of both sentences, compare each word. If the words are identical, remove them from both `deques`.

4. `Compare the longest matching suffix`:

    - Starting from the back of both sentences, compare each word. If the words are identical, remove them from both `deques`.

5. `Check similarity`:

    - After the prefix and suffix comparisons, if all words in `sentence1` are removed (`s1.empty()`), the sentences are similar.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - where `n` is the number of words in `sentence1` and `m` is the number of words in `sentence2`. We process each word at most once from both sentences.

-   Space-Complexity: `O(n + m)` - where `n` is the number of words in `sentence1` and `m` is the number of words in `sentence2`. The space is used to store the words in the `deques`.