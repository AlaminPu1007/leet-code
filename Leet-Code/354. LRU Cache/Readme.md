## 146. LRU Cache

This problem involved about, design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/lru-cache/description/)

**Approach :**<br/>

1. The LRUCache class uses a doubly-linked list to keep track of the recently used elements. The head and tail nodes are used to simplify boundary operations.

2. It maintains an unordered_map (Map) to quickly access elements by their keys.

3. When a get operation is called:

    - If the key exists in the Map, the corresponding node is moved to the front of the linked list to indicate it was recently used, and the value is returned.
    - If the key doesn't exist, it returns -1.

4. When a put operation is called:
    - If the key already exists in the Map, it removes the old node and updates it with the new value.
    - If the cache is full (reached its capacity), it removes the least recently used node, both from the linked list and the Map.
    - It adds the new node to the front of the linked list and updates the Map.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` -
-   Space-Complexity: `O(n)` - for maximum of capacity to hold into hash-map in worst case
