# 432. All O`one Data Structure

This problem involved about, design a data structure to store the strings' count with the ability to return the strings with minimum and maximum counts.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/all-oone-data-structure/description/)

**Approach :**<br/>

The `AllOne` data structure is designed to support the following operations efficiently:

1. **Increment (`inc`)**: Increases the count of a key by 1.
2. **Decrement (`dec`)**: Decreases the count of a key by 1. If the count becomes zero, the key is removed.
3. **Get Maximum Key (`getMaxKey`)**: Returns the key with the highest count.
4. **Get Minimum Key (`getMinKey`)**: Returns the key with the lowest count.

The solution leverages two main data structures:

-   **`unordered_map<string, int> count`**: This stores the count of each key, allowing `O(1)` lookup and update operations.
-   **`set<pair<int, string>> st`**: This stores pairs of counts and keys, automatically ordered by the count first (in ascending order), and then lexicographically by the key. This ensures that the smallest and largest counts can be accessed in constant time.

**Algorithm :**<br/>

#### 1. **Increment Operation (`inc`)**

-   Retrieve the current count of the key from `count`.
-   Update the `count` by incrementing it.
-   Remove the old pair `{c, key}` from the set `st`.
-   Insert the new pair `{c + 1, key}` into the set.

Time Complexity: `O(log n)` because insertion and deletion in a set takes `O(log n)` time where `n` is the number of elements in the set.

#### 2. **Decrement Operation (`dec`)**

-   Retrieve the current count of the key from `count`.
-   Decrement the count of the key.
-   Remove the old pair `{c, key}` from the set.
-   If the new count is greater than zero, insert the updated pair `{c - 1, key}` back into the set. Otherwise, remove the key from both the `count` map and the set.

Time Complexity: `O(log n)` for the same reasons as the increment operation.

#### 3. **Get Maximum Key (`getMaxKey`)**

-   The maximum key is the last element in the set `st`, which can be accessed in constant time by `rbegin()` (reverse iterator).
-   Return the second element of the pair (i.e., the key).

Time Complexity: `O(1)`.

#### 4. **Get Minimum Key (`getMinKey`)**

-   The minimum key is the first element in the set `st`, which can be accessed in constant time by `begin()`.
-   Return the second element of the pair (i.e., the key).

Time Complexity: `O(1)`

**Complexity Analysis :**<br/>

-   Time-Complexity:

1.  `Increment (inc)`: `O(log n)` where `n` is the number of keys in the data structure. This is due to the insertion and deletion operations in the ordered set `st`.
2.  `Decrement (dec)`: `O(log n)` for similar reasons as increment.
3.  `Get Maximum Key (getMaxKey)`: `O(1)` as it simply accesses the last element in the set.
4.  `Get Minimum Key (getMinKey)`: `O(1)` as it simply accesses the first element in the set.

-   Space-Complexity: `O(n)` - The space complexity is `O(n)` where `n` is the number of unique keys. This is because we store each key and its count in both the `unordered_map` and the `set`. Each entry in the `set` requires storing the pair `{count, key}`.