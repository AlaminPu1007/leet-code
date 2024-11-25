# 1405. Longest Happy String

This problem involved about, A string s is called happy if it satisfies the following conditions:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-happy-string/description)

**Approach :**<br/>

To solve this problem, a `greedy approach` is used:

1. Always try to append the character with the highest remaining frequency to the result string.
2. Ensure that no three consecutive characters are the same by checking the last two characters in the result string:
    - If the last two characters in the result string are the same as the current character with the highest frequency, choose the next character with the second highest frequency.
    - If there is no other available character, stop the process.

**Algorithm :**<br/>

1. Use a `max heap` (`priority_queue`) to keep track of the characters `'a'`, `'b'`, and `'c'` with their respective counts.
2. While the heap is not empty:
    - Extract the character with the highest count from the heap.
    - Check if adding this character violates the rule of having three consecutive characters:
        - If it does, extract the character with the second highest count from the heap and use it instead.
        - Push back characters into the heap if they still have remaining counts after being used.
3. Build the result string step-by-step by following this greedy strategy until no further characters can be added.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O((a + b + c) * log(3))` or `O(n * log(3))` - where `n` is the sum of `a`, `b`, and `c`. We maintain a max heap with at most 3 elements (since there are only three characters), and in each step, we perform a heap operation which takes `O(log(3)) = O(1)` time.

-   Space-Complexity: `O(1)` - for the heap, since it contains at most 3 elements at any time.