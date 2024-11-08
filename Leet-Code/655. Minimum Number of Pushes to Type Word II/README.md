# 3016. Minimum Number of Pushes to Type Word II

This problem involved about, you are given a string word containing lowercase English letters.<br/>

Telephone keypads have keys mapped with distinct collections of lowercase English letters, which can be used to form words by pushing them. For example, the key 2 is mapped with ["a","b","c"], we need to push the key one time to type "a", two times to type "b", and three times to type "c".<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/description/)

**Approach :**<br/>

1. `Calculate Character Frequencies `:

    - Count the frequency of each character in the word and store it in an array `freq`.

2. `Use a Priority Queue to Sort Frequencies `:

    - Push all non-zero frequencies into a max-heap (priority queue) to process the most frequent characters first.

3. `Distribute Frequencies Across Buttons`:
    - Distribute characters to buttons (2 to 9), incrementing the number of presses required based on the button position.
    - Each button can hold up to 8 distinct characters. Calculate the presses as `value * (1 + i / 8)` where `i` is the current index.

**Algorithm :**<br/>

1. `Initialize Frequency Array`:

    - Create an array `freq` of size 26 to store the frequency of each character (from 'a' to 'z').

2. `Calculate Frequencies`:

    - Iterate through the word and update the frequency of each character in `freq`.

3. `Use Priority Queue`:

    - Push each non-zero frequency from `freq` into a max-heap (priority queue).

4. `Calculate Minimum Pushes`:
    - Initialize a counter `i` to 0 and a result variable `res` to 0.
    - While the priority queue is not empty:
        - Pop the top element (most frequent character).
        - Add the value multiplied by `(1 + i / 8)` to `res`.
        - Increment `i`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterating through the word string to count the frequency of each letter takes O(n)
-   Space-Complexity: `O(1)` - The frequency map and priority queue take `O(26) = O(1)` space
