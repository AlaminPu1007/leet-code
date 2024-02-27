## 1642. Furthest Building You Can Reach

This problem involved about, you are given an integer array heights representing the heights of buildings, some bricks, and some ladders.
You start your journey from building 0 and move to the next building by possibly using bricks or ladders. <br/>
While moving from building i to building i+1 (0-indexed).

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/furthest-building-you-can-reach/description/)

**Approach :**<br/>

1. Initialize variables `n` as the size of the `heights` array, and create a priority queue `pq`.
2. Iterate through each pair of consecutive heights in the `heights` array.
3. Calculate the difference `diff` between the current and next height.
4. If `diff` is negative, continue to the next iteration.
5. Subtract `diff` from the available `bricks`.
6. Push `diff` onto the priority queue `pq`.
7. If `bricks` becomes negative, check if there are remaining `ladders`.
8. If `ladders` is greater than 0, use a ladder by subtracting the largest difference from `pq` and adding it back to `bricks`. Decrement `ladders`.
9. If `ladders` is 0, return the current index as the furthest reachable index.
10. Continue the loop until the end of the `heights` array.
11. If the loop completes, return the last index as the furthest reachable index.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where N is the size of the `heights` array. The algorithm involves iterating through the array and performing operations on a priority queue.

-   Space-Complexity: `O(n)` - we are using an extra data structure priority_queue
