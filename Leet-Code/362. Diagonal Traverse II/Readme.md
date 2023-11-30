## 1424. Diagonal Traverse II

This problem involved about, given a 2D integer array `nums`, return all elements of `nums` in diagonal order as shown in the below images.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/diagonal-traverse-ii/description)

**Approach 1 Hash-Map:**<br/>

1. Initialize an `unordered_map<int, vector<int>> Map`.
2. Iterate through the rows of the 2D vector (`nums`) in reverse order:
   a. For each element in a row:
   i. Calculate the diagonal position `(i + j)`.
   ii. Store the element in the corresponding diagonal's vector in the map.
3. Initialize a count variable to 0.
4. While the map contains a diagonal with the current count:
   a. Append the elements from the corresponding vector in the map to the result vector (res).
   b. Increment the count.
5. Return the result vector (res).

**Approach 1 Queue:**<br/>

1. Queue Initialization:
    - Initialize a queue (q) to store pairs of row and column indices.
2. Enqueue Starting Point:
    - Enqueue the top-left element (0, 0) into the queue.
3. Queue-Based Traversal:
    - While the queue is not empty:
        1. Dequeue the front element.
        2. Append the corresponding element from nums to the result vector (res).
        3. Enqueue the element below (if applicable) and the element to the right (if applicable).
4. Return the result vector (res).

**Complexity Analysis for hash-map :**<br/>

-   Time-Complexity:`O(n*m)` - where N is the number of rows in nums and M is the maximum number of elements in any row. This is due to the nested loops iterating through all elements in the 2D vector.

-   Space-Complexity:`O(n+m)` - where N is the number of rows and M is the maximum number of elements in any row

**Complexity Analysis for queue :**<br/>

-   Time-Complexity:`O(n*m)` - where N is the number of rows in nums and M is the maximum number of elements
-   Space-Complexity: `O(n)` - we are using na extra queue data structure
