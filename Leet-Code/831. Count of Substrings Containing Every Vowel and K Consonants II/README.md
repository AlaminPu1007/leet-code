# 3306. Count of Substrings Containing Every Vowel and K Consonants II

This problem involved about, you are given a string word and a non-negative integer k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/description)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a string `word` and an integer `k`.
    - The goal is to count the number of substrings that contain `exactly `k` non-vowel characters` and `all five vowels (`a`, `e`, `i`, `o`, `u`)` at least once.

2. `Algorithm`:

    - Use a `sliding window` approach to maintain a window of characters that contains all five vowels and exactly `k` non-vowel characters.
    - Use a hashmap (`vowelsCount`) to track the count of vowels in the current window.
    - Use a variable `non_vowels_count` to track the number of non-vowel characters in the current window.
    - For each window, if it contains all five vowels and exactly `k` non-vowel characters, count it as a valid substring.
    - Use the helper function `atleastK` to calculate the number of substrings that contain `at least `k` non-vowel characters` and all five vowels.
    - The final result is the difference between the number of substrings with `at least `k` non-vowel characters` and the number of substrings with `at least `k+1` non-vowel characters`.

3. `Steps`:
    - Define a helper function `atleastK`:
        1. Initialize a hashmap `vowelsCount` to track vowels and a variable `non_vowels_count` to track non-vowel characters.
        2. Use a sliding window to iterate through the string:
            - If the current character is a vowel, update its count in the hashmap.
            - If the current character is a non-vowel, increment `non_vowels_count`.
            - While the window contains all five vowels and at least `k` non-vowel characters:
                1. Add the number of valid substrings ending at the current position to the result.
                2. Move the left pointer (`l`) to the right and update the counts.
    - Define a helper function `isVowel` to check if a character is a vowel.
    - Compute the result as `atleastK(word, k) - atleastK(word, k + 1)`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - `n` is the length of the string.
-   Space-Complexity: `O(1)` - as the hashmap `vowelsCount` stores at most 5 vowels, and only a few additional variables are used.
