# 432. All O`one Data Structure

This problem involved about, design a data structure to store the strings' count with the ability to return the strings with minimum and maximum counts.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/all-oone-data-structure/description/)

**Approach :**

The `AllOne` data structure is designed to maintain string keys and their associated frequencies, with the ability to:

1. `Increment (`inc`)`: Increase the count of a key by 1.
2. `Decrement (`dec`)`: Decrease the count of a key by 1. If the count becomes 0, the key is removed.
3. `Get Maximum Key (`getMaxKey`)`: Retrieve the key with the highest frequency.
4. `Get Minimum Key (`getMinKey`)`: Retrieve the key with the lowest frequency.

This implementation leverages:

-   A `doubly linked list` (`Node` class) to maintain frequency groups.
-   An `unordered map` (`Map`) that maps strings to the corresponding frequency node in the linked list.
-   Each node in the doubly linked list stores a set of keys that share the same frequency.

**Algorithm :**<br/>

#### 1. `Increment Operation (`inc`)`

-   If the key is already in the map, its frequency is incremented.
    -   The key is removed from the current frequency node.
    -   If the next node does not exist or does not represent the incremented frequency, a new node is created and inserted after the current node.
    -   The key is moved to the node representing the incremented frequency.
    -   If the current frequency node becomes empty, it is removed.
-   If the key is new (not in the map), it is added to the node representing frequency `1`. If this node does not exist, it is created and added after the head node.

Time Complexity: `O(1)` for key insertion/removal and node insertion/removal, as we are using a doubly linked list with direct access to nodes via the map.

#### 2. `Decrement Operation (`dec`)`

-   If the key is not in the map, the operation does nothing.
-   If the key's current frequency is `1`, the key is removed from the map.
-   If the frequency is greater than `1`, the key is moved to the node representing the decremented frequency.
    -   The key is removed from the current node and moved to the previous node in the doubly linked list. If this node does not represent the decremented frequency, a new node is created for this purpose.
    -   If the current node becomes empty, it is removed from the list.

Time Complexity: `O(1)` for the same reasons as the increment operation.

#### 3. `Get Maximum Key (`getMaxKey`)`

-   The maximum key corresponds to any key stored in the last node before the tail.
-   If no keys exist, return an empty string.

Time Complexity: `O(1)` because it directly accesses the node before the tail.

#### 4. `Get Minimum Key (`getMinKey`)`

-   The minimum key corresponds to any key stored in the first node after the head.
-   If no keys exist, return an empty string.

Time Complexity: `O(1)` because it directly accesses the node after the head.

#### 5. `Remove Node (`removeNode`)`

-   This helper function removes a given node from the doubly linked list and updates the pointers of the adjacent nodes.

Time Complexity: `O(1)`.

**Complexity Analysis :**

### Time-Complexity:

-   **Increment (`inc`)**: `O(1)` for both incrementing the frequency and adjusting the doubly linked list.
-   **Decrement (`dec`)**: `O(1)` for decrementing the frequency and adjusting the doubly linked list.
-   **Get Maximum Key (`getMaxKey`)**: `O(1)` for direct access to the maximum frequency node.
-   **Get Minimum Key (`getMinKey`)**: `O(1)` for direct access to the minimum frequency node.
-   **Remove Node**: `O(1)` for removing a node from the doubly linked list.

### Space-Complexity:

The space complexity is `O(n)` where `n` is the number of unique keys. This is because:

-   We store each key and its frequency in the map (`unordered_map<string, Node *>`).
-   Each frequency node stores a set of keys (`unordered_set<string>`), which requires additional space for each key.

The doubly linked list adds a constant overhead for storing frequency nodes, which is typically small compared to the number of keys.