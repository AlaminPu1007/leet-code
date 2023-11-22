## 460. LFU Cache

This problem involved about, Design and implement a data structure for a Least Frequently Used (LFU) cache.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/lfu-cache/description/)

**Approach :**<br/>

The code you've provided is an implementation of an LFU (Least Frequently Used) cache using a combination of a doubly linked list for frequency lists and a map to maintain key-value pairs. The LFU cache has methods to get and put key-value pairs while managing the least frequently used items based on their usage frequency. The cache evicts items when it reaches its maximum size.

**Algorithm :**<br/>

1. Create a class Node to represent elements in the cache with fields for the key, value, and count (usage frequency). Initialize the node with these values.

2. Create a class List to represent the doubly linked list for each frequency list. Initialize it with a head and tail sentinel nodes and a size counter.

3. Create a class LFUCache to manage the LFU cache. It includes a map for key-value pairs and a map for frequency lists.

4. Implement a get method to retrieve the value for a given key. If the key exists in the cache, update its usage frequency and return the value. If not, return -1.

5. Implement a put method to insert a new key-value pair or update an existing one. If the cache is at its maximum size, remove the least frequently used item. Update the cache by increasing the usage frequency of the key-value pair and create a new frequency list if necessary.

6. Implement an updateFreqListMap method to update the frequency of a given node. This method handles the transitions between frequency lists.

# Complexity Analysis

**Time-Complexity :**<br/>

-   The get method: `O(1)` because it involves a map lookup.
-   The put method: `O(1)` for inserting or updating a key-value pair and managing the frequency lists.
-   The updateFreqListMap method: `O(1)` for updating the frequency lists.

**Space-Complexity :**<br/>

The space complexity is `O(N)`, where `N` is the maximum size of the LFU cache. It includes the space for the key-value pairs, frequency lists, and the doubly linked lists used to organize items based on usage frequency
