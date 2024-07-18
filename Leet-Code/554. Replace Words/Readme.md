# 648. Replace Words

This problem involved about, in English, we have a concept called root, which can be followed by some other word to form another longer word - let's call this word derivative. For example, when the root "help" is followed by the word "ful", we can form a derivative "helpful".

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/replace-words/description)

**Approach :**<br/>

1. **Define a Trie Node Class:**

    - Create a class `Node` with a fixed-size array `links[26]` to store references for each character (a to z).
    - Add methods to check for the existence of a character, insert a new node, get the reference of a node, and mark the end of a word.

2. **Define the Trie Class:**

    - Initialize the root node.
    - Implement the `insertIntoTrie` method to insert words from the dictionary into the Trie.
    - Implement the `isValidWord` method to search for the shortest prefix in the Trie that matches the start of a given word.

3. **Use the Trie in the Solution Class:**
    - Create an instance of the Trie.
    - Insert all dictionary words into the Trie.
    - Split the sentence into words and replace each word with its shortest prefix from the Trie if it exists.
    - Join the processed words to form the final sentence.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - where `n` is the length of the longest word and `m` is the number of words in the dictionary.
-   Space-Complexity: `O(26 * n * m)` - where `n` is the length of the longest word and `m` is the number of words in the dictionary.
