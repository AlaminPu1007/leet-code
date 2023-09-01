## 2284. Sender With Largest Word Count

This problem involved about, you have a chat log of n messages. You are given two string arrays messages and senders where messages[i] is a message sent by senders[i].Return the sender with the largest word count. If there is more than one sender with the largest word count, return the one with the lexicographically largest name.

# Problem description

For better problem description, please visit [Leetcode Page](https://leetcode.com/problems/sender-with-largest-word-count/description/)

**Approach :**

-   loop through root array, and count word from given string, then store it into hash-map
-   git each senders word length from hash-table and compare it with max count, then update our ans

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - we iterate over the array and for each given string we count it's wrod. the overall time complexity is `O(n^2)`. store and get item from hash map can have `O(1)` times
-   Space-Complexity: `O(n)`-since we are using an extra hash-table
