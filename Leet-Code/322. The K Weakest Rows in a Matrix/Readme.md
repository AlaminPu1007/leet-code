## 1337. The K Weakest Rows in a Matrix

This problem involved about, ou are given an m x n binary matrix mat of 1's (representing soldiers) and 0's (representing civilians). The soldiers are positioned in front of the civilians. That is, all the 1's will appear to the left of all the 0's in each row.
Return the indices of the k weakest rows in the matrix ordered from weakest to strongest.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description)

**Algorithm :**<br/>

-   Define a priority queue pq of pairs, where each pair contains the number of 1s in a row and the row's index. The priority queue is set up as a min-heap, which ensures that the rows with the lowest number of 1s are at the top.
-   Create an unordered map Map to store the count of 1s in each row. Iterate through each row of the input matrix and count the number of 1s in that row. Store this count in the map with the row index as the key.
-   Populate the priority queue pq with pairs of counts and row indices from the map. This step effectively sorts the rows based on the number of 1s they contain in ascending order.
-   While the priority queue is not empty and 'k' is greater than 0:
    1. Pop the top element from the priority queue.
    2. Append the row index (which is the second element of the pair) to the result vector.
    3. Decrement 'k' by 1.
-   Return the result vector containing the indices of the 'k' weakest rows.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - since we iterate over the two dimensional array and making key value pairs using hash-map,that could have `O(n^2)` times, Populating the priority queue takes `O(n * log(n))` time because there are 'n' rows, and each insertion into the min-heap takes` O(log(n))` time.
-   Space-Complexity: `O(n)` - since we are using an additional extra spaces
