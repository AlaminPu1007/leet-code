# 1400. Construct K Palindrome Strings

This problem involved about, given a string s and an integer k, return true if you can use all the characters in s to construct k palindrome strings or false otherwise.

## Problem description

For better problem description, please visit [LeetCode Page]()

**Approach :**<br/>

#### 1. Count Character Frequencies

-   Use a hash map (`unordered_map`) to store the frequency of each character in the string.
-   Traverse the string and update the count of each character.

#### 2. Count Odd Frequencies

-   Iterate over the hash map and count the number of characters that have an **odd frequency**.
-   This is necessary because each odd-frequency character requires its own unique palindrome.

#### 3. Validate Conditions

-   Check if the string can be split into `k` palindromic substrings by ensuring:
    -   `oddCount ≤ k`: There must be enough groups (substrings) to accommodate all odd-frequency characters.
    -   `k ≤ s.size()`: The total number of substrings cannot exceed the total characters in the string.
-   Return `true` if both conditions are satisfied; otherwise, return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string `s`
-   Space-Complexity: `O(26)` - there is fixed sized of 26 characters.
