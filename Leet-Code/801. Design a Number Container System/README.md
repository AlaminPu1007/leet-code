# 2349. Design a Number Container System

This problem involved about, design a number container system that can do the following:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/design-a-number-container-system/description)

**Data Structures :**<br/>

1. `noToIndex (unordered_map<int, int>)`: Stores the `current number assigned to each index`.
    - Key: `index`
    - Value: `number` at that index
2. `indexGroup (unordered_map<int, set<int>>)`: Maintains `a sorted set of indices` for each number.
    - Key: `number`
    - Value: A `set<int>` containing `all indices` where this number appears.

---

**Algorithm :**<br/>

1.  `change(index, number)`

    -   If `index` was previously assigned a different number:
        -   Remove `index` from the previous number's index set (`O(log(n))` due to `set.erase()`).
        -   If the set becomes empty, remove the entry from `indexGroup`.
    -   Update `noToIndex[index] = number`.
    -   Insert `index` into `indexGroup[number]` (`O(log(n))` due to `set.insert()`).

2.  `find(number)`
    -   If `number` exists in `indexGroup`, return the `smallest index` (`*indexGroup[number].begin()`, `O(1)`).
    -   Otherwise, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(q * log(n))` - for `q` queries, assuming `n` distinct indices.
-   Space-Complexity: `O(n)` - we are using extra map data structures.
