## 212. Word Search II

This problem involved about, given an m x n board of characters and a list of strings words, return all words on the board. <br/>

Each word must be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once in a word. <br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/word-search-ii/description/)

**Approach :**<br/>

## Class: Trie

### Method: setWordIntoTrie

**Algorithm:**

1. Initialize a trie data structure with a root node.
2. Iterate through each word in the given list of words.
3. For each word, traverse the trie from the root node, creating new nodes as needed to represent the word.
4. Set the end flag of the last node representing the word to true.

## Class: Solution

### Method: findWords

**Algorithm:**

1. Initialize an empty vector `ans` to store the found words.
2. Create a trie using the list of words.
3. Initialize a visited matrix to keep track of visited cells in the board.
4. Iterate through each cell in the board.
5. Perform depth-first search (DFS) from each cell, checking if the formed word exists in the trie.
6. If a word is found, add it to the result vector.
7. Return the result vector containing all found words.

**Complexity Analysis :**<br/>

-   Time-Complexity:

    -   Let `n` be the number of cells in the board and `m` be the maximum length of words in the list.
    -   Constructing the trie takes `O(m * k)` time, where k is the number of words.
    -   DFS traversal for each cell takes `O(n * 4^m)` time in the worst case.
    -   Thus, the overall time complexity is `O(m _ k + n _ 4^m)`.

-   Space-Complexity:
    -   The trie data structure requires `O(m * k)` space.
    -   The visited matrix requires `O(n)` space.
    -   The recursion stack for DFS requires` O(m)` space.
    -   Thus, the overall space complexity is `O(m * k + n + m)`.
