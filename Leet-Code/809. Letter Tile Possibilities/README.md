# 1079. Letter Tile Possibilities

This problem involved about, you have n tiles, where each tile has one letter `tiles[i]` printed on it.
Return the number of possible non-empty sequences of letters you can make using the letters printed on those tiles.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/letter-tile-possibilities/description)

**Approach :**<br/>

The solution uses `backtracking` to generate all possible sequences of the given tiles, storing them in an `unordered_set` to ensure uniqueness. The process involves:

1. `Recursive Backtracking:`

    - Iterate through each tile and form different permutations while keeping track of visited characters.
    - Store each sequence in a set to avoid duplicates.
    - Recursively explore all possible sequences by adding one character at a time.

2. `Base Case & Backtracking:`
    - Every newly formed sequence is stored in the set.
    - If a character is unvisited, mark it as visited and recurse with the updated string.
    - After the recursive call, reset the visited state (backtracking) to allow other sequences to be explored.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * n!)` - the overall time complexity is `O(n! * n)` due to recursive calls and string concatenation.
-   Space-Complexity: `O(n * n!)` - The `unordered_set` stores up to `O(n!)` unique sequences. The recursion stack takes `O(n)` space in the worst case.
