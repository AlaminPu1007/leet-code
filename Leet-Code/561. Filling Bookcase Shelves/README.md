# 1105. Filling Bookcase Shelves

This problem involved about, You are given an array books where `books[i] = [thicknessi, heighti]` indicates the thickness and height of the ith book. You are also given an integer shelfWidth.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/filling-bookcase-shelves/description/)

**Approach :**<br/>

1. **Recursive Depth-First Search (DFS) with Memoization**:

    - Use a recursive DFS approach to explore placing books starting from each index.
    - Memoize results to avoid redundant calculations.
    - For each book, try placing it on the current shelf until the width limit is reached, then recursively calculate the minimum height required for the remaining books.
    - Keep track of the maximum height of books on the current shelf.

2. **Base Case**:

    - If the starting index exceeds the number of books, return 0 (no more books to place).

3. **Recursive Case**:

    - Initialize the result for the current index as `INT_MAX`.
    - For each subsequent book, check if it can fit on the current shelf.
    - Update the remaining shelf width and the maximum height of the current shelf.
    - Recursively calculate the height for the rest of the books and update the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * shelfWidth)` - where `n` is the number of books. Each book can be the start of a new shelf, and we explore up to `shelfWidth` books from each starting point.

-   Space-Complexity: `O(n)` - for the cache array used in memoization.