# 2707. Extra Characters in a String

This problem involved about, you are given a 0-indexed string s and a dictionary of words dictionary. You have to break s into one or more non-overlapping substrings such that each substring is present in dictionary. There may be some extra characters in s which are not present in any of the substrings.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/extra-characters-in-a-string/description)

**Approach :**<br/>

#### Key Observations:

-   The problem involves finding valid substrings of `s` that exist in the dictionary. If a substring is valid, it doesn’t count as extra characters.
-   We aim to minimize the number of characters that cannot be matched with any word in the dictionary.
-   We can use a **Trie** data structure to efficiently check whether a substring of `s` exists in the dictionary.
-   Using **DP**, we can explore all possible substrings from each position `i` in `s` and determine the minimum number of extra characters for the entire string.

#### Trie Data Structure:

A Trie is a tree-like structure that is used to efficiently store and search strings. Each node of the Trie represents a character, and the path from the root to a node represents a prefix of words stored in the Trie.

-   **Inserting Words:** Each word from the dictionary is inserted into the Trie, where each character represents a node, and paths from the root to leaf nodes represent complete words.
-   **Searching Words:** We can search for substrings of `s` in the Trie by checking whether characters exist as we traverse down the Trie.

#### Dynamic Programming:

-   We maintain a `memo` array where `memo[i]` represents the minimum number of extra characters starting from index `i` of `s`.
-   For each index `i` in `s`, we have two choices:
    1. **Count the current character as extra** and move to `i + 1`.
    2. **Match a substring starting from `i`** in the Trie. If a valid word is found, we recursively solve the problem for the substring starting at `j + 1`, where `j` is the end of the matched word.

#### Steps:

1. **Build the Trie** using all the words from the dictionary.
2. **Define a recursive function** `solve` that uses memoization to minimize the number of extra characters:
    - If the current index `i` has been computed before, return the stored result from `memo[i]`.
    - Otherwise, explore all possible substrings starting at index `i`:
        - If a valid word is found in the Trie, update the result by comparing the current minimum with the result of the recursive call for the rest of the string.
        - Count the current character as extra and move to the next index if no valid substring is found.
3. **Return the result** stored in `memo[0]`, which contains the minimum number of extra characters for the entire string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(D * L + n^2 * L)` - Inserting each word of the dictionary into the Trie takes `O(L)` time per word, where `L` is the average length of a word. For `D` words in the dictionary, the total time for building the Trie is `O(D * L)`. We recursively explore each index of `s`. For each index `i`, we check all substrings starting from `i` and search them in the Trie. In the worst case, for each character, we may need to check all remaining characters in the string. Thus, the DP recursion takes `O(n^2 * L)` time, where `n` is the length of the string `s` and `L` is the average length of words in the dictionary.

-   Space-Complexity: `O(D * L + N)` - The Trie stores up to `D * L` characters. The `memo` array takes `O(n)` space.