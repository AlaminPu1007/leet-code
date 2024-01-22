## 1496. Path Crossing

This problem involved about, given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or west, respectively. You start at the origin (0, 0) on a 2D plane and walk on the path specified by path.<br/>

Return true if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited. Return false otherwise.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/path-crossing/description/)

**Approach :**<br/>

1. Create a hash map moves that maps the characters N, S, W, E to the corresponding values from above.
2. Initialize a hash set visited with (0, 0).
3. Initialize x = 0 and y = 0.
4. For each c in path:
    1. Get (dx, dy) from moves[c].
    2. Add dx to x and dy to y.
    3. Check if (x, y) is in visited. If it is, return true.
    4. Add (x, y) to visited.
5. return false
   **Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We iterate over each character of path once, performing `O(1)` work at each iteration
-   Space-Complexity: `O(n)` - When there are no crossings, visited will grow to a length of nnn
