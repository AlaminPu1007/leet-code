# 2416. Sum of Prefix Scores of Strings

This problem involved about, you are given an array words of size n consisting of non-empty strings.<br/>
We define the score of a string word as the number of strings words[i] such that word is a prefix of words[i].

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/sum-of-prefix-scores-of-strings/description)

**Approach :**<br/>

1. `Trie Structure`:
    - A Trie is a tree-like data structure where each node represents a character of the alphabet.
    - Each node stores a `countPrefix` which tracks how many words share the prefix that ends at this node.
2. `Inserting Words into the Trie`:

    - For each word in the list, insert it into the Trie character by character.
    - For each character, check if it already exists in the current node. If not, create a new node.
    - As we traverse the word, increment the `countPrefix` at each node to indicate the number of words sharing this prefix.

3. `Calculating the Prefix Scores`:
    - For each word, traverse the Trie and sum up the `countPrefix` values of all its prefixes.
    - This sum is the prefix score for that word.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * L)` - Where `n` is the no of words, and `L` is the maximum length of word.
-   Space-Complexity: `O(n * L)` - The space complexity is mainly driven by the Trie structure. In the worst case, where all characters are unique, the space complexity is `O(n * L)`, where `n` is the number of words and `L` is the maximum length of a word.