## 819. Most Common Word

This problem involved about, given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique. <br/>

The words in paragraph are case-insensitive and the answer should be returned in lowercase. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/most-common-word/description/)

**Approach :**<br/>

1. Create an unordered map Map to store word frequencies.
2. Initialize an empty string s to build each word.
3. Initialize variables n for the size of the paragraph, res for the maximum frequency, and ans for the most common word.
4. Iterate through the characters of the paragraph.
    - If a character is an alphabet letter, append its lowercase version to the current word (s).
    - If a non-alphabetic character is encountered, update the frequency of the current word in the map (Map) and reset s to an empty string.
5. f there is a remaining word after the loop, update its frequency in the map.
6. Iterate through the list of banned words and set their frequencies in the map to 0.
7. Iterate through the map to find the word with the highest frequency (res).
    - Update ans with the most common word.
8. Return the most common word (ans).

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - O(n + m), where n is the length of the paragraph and m is the total length of the banned words.
-   Space-Complexity: `O(n)` - O(n), where n is the number of unique words in the paragraph.
