# 1371. Find the Longest Substring Containing Vowels in Even Counts

This problem involved about, given the string s, return the size of the longest substring containing each vowel an even number of times. That is, `'a', 'e', 'i', 'o', and 'u'` must appear an even number of times.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/description/)

**Approach :**<br/>

1. `Use a Bitmask:`

    - Maintain a bitmask to track the parity (even or odd) of occurrences of vowels.
    - The bitmask will have 5 bits corresponding to the vowels `a`, `e`, `i`, `o`, `u`. A bit is set to 1 if the number of occurrences of the corresponding vowel is odd, and 0 if even.

2. `Initialize the Bitmask:`

    - Start with a bitmask of `0` (all vowels occur an even number of times initially).
    - Use a hashmap (`mask_to_idx`) to store the first occurrence of each unique bitmask.

3. `Iterate Over the String:`

    - For each character in the string, if it is a vowel, toggle the respective bit in the bitmask.
    - Check if the current bitmask has been seen before:
        - If yes, calculate the length of the substring between the current index and the first occurrence of this bitmask.
        - If no, store the current index for this bitmask.

4. `Return the Maximum Length:`
    - The result is the maximum length of any substring where the bitmask was the same, indicating all vowels in that substring occurred an even number of times.

**Algorithm :**<br/>

1. Initialize `res` to store the longest length and `mask` to track the parity of vowels.
2. Create a map `mask_to_idx` to store the first occurrence of each bitmask, initializing it with `0` mapped to `-1` (representing an empty substring).
3. Iterate over the string `s`:
    - If the character is a vowel, toggle the respective bit in the `mask`.
    - If the bitmask has been seen before, update `res` with the length of the current valid substring.
    - If the bitmask is new, store the current index in `mask_to_idx`.
4. After processing the entire string, return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We iterate over the string `s` once, where `n` is the length of the string.
-   Space-Complexity: `O(n)` - In the worst case, we store a bitmask for each index of the string, leading to a space complexity of `O(n)` for the hashmap.