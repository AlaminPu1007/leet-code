# 884. Uncommon Words from Two Sentences

This problem involved about, a sentence is a string of single-space separated words where each word consists only of lowercase letters.
A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/uncommon-words-from-two-sentences/description)

**Approach :**<br/>

1. `Concatenate the Sentences:`

    - Join `s1` and `s2` into one string with a space separator.

2. `Count Word Frequencies:`

    - Use a hashmap (`unordered_map<string, int>`) to store the frequency of each word from the concatenated string.
    - Tokenize the concatenated string using a `stringstream` to extract individual words.

3. `Identify Uncommon Words:`

    - Iterate through the hashmap and collect all words that occur exactly once.
    - A word is considered uncommon if its frequency is `1`.

4. `Return the Result:`
    - Return a vector of the uncommon words.

**Algorithm :**<br/>

1. Create a hashmap (`Map`) to count the occurrences of words.
2. Concatenate `s1` and `s2` into a single string.
3. Use a `stringstream` to extract words from the concatenated string, and for each word, increment its count in the hashmap.
4. Iterate over the hashmap and collect words that have a frequency of `1` into a result vector.
5. Return the result vector.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - Where `n` is the length of `s1` and `m` is the length of `s2`.
-   Space-Complexity: `O(w)` - Where `w` is the total number of unique words across both sentences.