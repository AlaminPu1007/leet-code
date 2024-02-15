## 1160. Find Words That Can Be Formed by Characters

This problem involved about, you are given an array of strings words and a string chars.<br/>
A string is good if it can be formed by characters from chars (each character can only be used once).<br/>
Return the sum of lengths of all good strings in words.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/)

**Approach :**<br/>

1. Initialize res as the variable to hold the total count of characters that can be formed from the given words.
2. Create a frequency array freq of size 26 (for each alphabet) and initialize all frequencies to 0.
3. Iterate through the chars string and update the frequency array with the count of each character occurrence.
4. For each word in the words vector:
    - Create a flag variable flag initialized as false to check if the word can be formed.
    - Create a copy of the frequency array copyFreq.
    - Iterate through each character of the word:
        1. If the character's frequency in copyFreq is 0, set flag to true (indicating the word can't be formed).
        2. Otherwise, decrement the frequency of the character in copyFreq.
    - If flag remains false after the inner loop, add the length of the word to res (indicating the word can be formed).
5. Return the total count res of characters that can be formed from the given words using the characters in the string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N * M)` - `O(N * M)`, where N is the length of the chars string, and M is the total number of characters in all the words combined.
-   Time-Complexity: `O(1)` - we are not using any extra spaces, except constant spaces
