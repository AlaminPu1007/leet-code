# 2940. Find Building Where Alice and Bob Can Meet

This problem involved about, you are given a 0-indexed array heights of positive integers, where heights[i] represents the height of the ith building.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-building-where-alice-and-bob-can-meet/description/)

**Approach :**<br/>

1. `Initialization`:

    - Use a result vector `res` to store the result for each query, initialized to `-1`.
    - Use a priority queue `pq` to keep track of required heights for unresolved queries.
    - Use a hashmap `groups` to group queries based on their end index `(r)`.

2. `Preprocessing Queries`:

    - For each query `[l, r]`:
        - If `(l = r)` or the height at `(r)` is greater than the height at (l), directly set the result to `(r)`.
        - Otherwise, determine the maximum required height and associate it with `(r)` in the `groups` map.

3. `Processing Heights`:

    - Traverse the `heights` array:
        - For each index `(i)`, push all queries from `groups[i]` into the priority queue.
        - Pop and resolve all queries in the queue where the height at `(i)` satisfies the height condition.

4. `Return Results`:
    - Return the `res` array containing the leftmost buildings for all queries.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - for sorting query ranges.
-   Space-Complexity: `O(n)` - for the priority queue and hashmap.
