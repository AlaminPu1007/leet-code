# 2182. Construct String With Repeat Limit

This problem involved about, you are given a string s and an integer repeatLimit. Construct a new string repeatLimitedString using the characters of s such that no letter appears more than repeatLimit times in a row. You do not have to use all characters from s.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/construct-string-with-repeat-limit/description/)

**Approach :**<br/>

1. `Frequency Count`:

    - Count the frequency of each character in `s` using a hash map.

2. `Priority Queue`:

    - Use a max-heap (priority queue) to store characters based on their lexicographical order.

3. `Construct the Result`:

    - While the priority queue is not empty:
        - Pop the lexicographically largest character from the heap.
        - Append it to the result string up to the `repeatLimit` times.
        - Reduce its frequency accordingly.
        - If the frequency of the current character is not zero and the heap is not empty:
            - Pop the next largest character and append it once to avoid exceeding the `repeatLimit`.
            - Push both characters back into the heap if they still have remaining frequency.

4. `Edge Cases`:
    - Handle situations where all remaining characters exceed the `repeatLimit` and no alternatives are available to break the sequence.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - In the worst case, we perform two heap operations for every character in the string, resulting in `O(N)` heap operations. Each heap operation involves pushing or popping an element, which takes `O(log(n))` time.

-   Space-Complexity: `O(n)` - The heap and the frequency counter stores up to `n` values.
