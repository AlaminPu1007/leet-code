## 514. Freedom Trail

This problem involved about, in the video game Fallout 4, the quest "Road to Freedom" requires players to reach a metal dial called the "Freedom Trail Ring" and use the dial to spell a specific keyword to open the door.<br/>

Given a string ring that represents the code engraved on the outer ring and another string key that represents the keyword that needs to be spelled, return the minimum number of steps to spell all the characters in the keyword.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/freedom-trail/description/)

**Approach with recursion :**<br/>

1. Implement a Depth-First Search (DFS) function to explore all possible rotations of the ring and find the minimum number of steps required to spell out the key.
2. Use memoization to optimize the DFS by storing the results of `subproblems` in a cache.
3. For each position in the ring, recursively explore all possible rotations and calculate the minimum steps required to spell out the remaining part of the key.
4. Return the minimum steps found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2 * m)`- In the worst case, we explore all possible combinations of ring rotations and key positions, resulting in a time complexity of `O(n^2 * m)`.

-   Space-Complexity: `O(n)` - We use a cache to store the results of subproblems, resulting in `O(n * m)` space complexity.
