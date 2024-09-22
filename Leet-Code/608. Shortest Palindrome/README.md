# 214. Shortest Palindrome

This problem involved about, you are given a string s. You can convert s to a palindrome by adding characters in front of it.
Return the shortest palindrome you can find by performing this transformation.

## Problem Statement

For a better problem description, please visit [LeetCode Page](https://leetcode.com/problems/shortest-palindrome/description)

**Approach :**<br/>

#### Step 1: Hashing with Rolling Hash

-   `Prefix Hashing`: Compute the hash of the prefix of the string by shifting the hash to the right with every new character.
-   `Suffix Hashing`: Compute the hash of the suffix by shifting the hash to the left.
-   `Hash Matching`: At each step, check if the prefix and suffix hash values are equal. If they are equal, it means the substring from the beginning to the current index is a palindrome.

#### Step 2: Finding the Longest Palindromic Prefix

-   We track the index of the longest palindromic prefix using the variable `last_seen_idx`. This helps us avoid recalculating the palindrome portion.
-   The portion after this index needs to be reversed and prepended to the original string to form the shortest palindrome.

#### Step 3: Reversing the Remaining Portion

-   After finding the longest palindromic prefix, reverse the remaining portion of the string (after the palindromic part) and prepend it to the original string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`, where `n` is the length of the string. This is due to the linear traversal of the string for hash computation and palindrome detection.

-   Space-Complexity: `O(n)`, due to the extra space required for storing the reversed string and hash values.
