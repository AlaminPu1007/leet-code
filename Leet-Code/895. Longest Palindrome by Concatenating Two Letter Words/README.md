# 2131. Longest Palindrome by Concatenating Two Letter Words

This problem involved about, you are given an array of strings words. Each element of words consists of two lowercase English letters.
Create the longest possible palindrome by selecting some elements from words and concatenating them in any order. Each element can be selected at most once.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/description)

**Key Insights :**<br/>

1. `Word Pairing`: Mirror words ("ab"+"ba") contribute 4 characters to the palindrome
2. `Symmetric Words`: Words like "aa" can be paired (each pair adds 4) or used as a single center (adds 2)
3. `Frequency Tracking`: Use a hash map to count word occurrences for efficient pairing

**Algorithm Steps :**<br/>

1. `Count Frequencies`: Create frequency map of all words
2. `Process Words`:
    - For mirror words ("ab"+"ba"), use pairs until one runs out
    - For symmetric words ("aa"), use pairs first, then one as center if available
3. `Track Center`: Only one symmetric word can be used as center
4. `Calculate Length`: Sum contributions from all valid pairs and center

**Complexity Analysis :** <br/>

-   Time-Complexity: `O(n)` - We iterate through the list of n words once to build the frequency map. Then we loop through each unique word (at most n in the worst case) and perform only constant-time operations (checking and creating a reversed word of length 2, updating counts, etc.). So the total time complexity remains linear in terms of the number of input words.

-   Space-Complexity: `O(n)` - We use an unordered map to store the frequency of each unique word. In the worst case where all n words are unique, the map will have n entries. Each entry stores a fixed-length string (2 characters) and an integer count, which is constant space per entry. Thus, the total space used is linear in the number of words.
