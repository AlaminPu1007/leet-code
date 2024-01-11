## 498. Diagonal Traverse

This problem involved about,

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/diagonal-traverse/description/)

**Approach :**<br/>

The given code solves the problem of traversing a 2D matrix diagonally and returning the elements in a specific order. The algorithm uses an unordered_map to group elements based on their diagonal indices (i + j). It then traverses the diagonals, reversing the order for every other diagonal, and collects the elements into the result vector.

**Algorithm :**<br/>

1. Create an unordered_map (Map) to store elements grouped by diagonal indices (i + j).
2. Traverse the input matrix (mat) and populate the map with elements.
3. Initialize a variable (count) to track the current diagonal index.
4. While there are elements in the map with the current diagonal index, do the following:
    - If the current count is odd, add elements from the map to the result vector.
    - If the current count is even, reverse the order of elements from the map and add them to the result vector.
    - Increment the count for the next diagonal.
5. Return the result vector.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * m)` - Populating the unordered_map takes `O(n * m)` time as it traverses each element in the matrix. The while loop traverses all diagonals, taking `O(n + m)` time in the worst case (considering diagonals that go through either the first row or the first column).

-   Space-Complexity: `O(n * m)` - for the unordered_map, as it stores each element in the matrix.
