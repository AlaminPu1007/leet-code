# 1639. Number of Ways to Form a Target String Given a Dictionary

This problem involved about, you are given a list of strings of the same length words and a string target.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/description)

**Approach :**<br/>

1. `Precompute Character Frequencies`:

    - For each column in the words list, count the frequency of each character.
    - Store the frequency in a `freq` table of size `( m times 26 )`, where `( m )` is the number of columns.

2. `Recursive DFS with Memoization`:

    - Use a DFS approach to explore ways to form the target:
        - Start with the first column and match characters from the target string.
        - At each step, decide whether to:
            - Skip the current column (move to the next column but keep the current target index).
            - Use the current column to match the current target character (move both column and target indices forward).
    - Memoize results in a `dp` table to avoid redundant calculations.

3. `Modulo Operation`:
    - To prevent overflow, take results modulo `( 10^9 + 7 )` at every step.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - The getWords function is called recursively for each combination of word index and target index, leading to O(wordLength \* targetLength) recursive calls.
-   Space-Complexity: `O(n * m)` - where m is the length of the `words` and n is the length of the targets.
