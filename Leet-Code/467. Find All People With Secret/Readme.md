## 2092. Find All People With Secret

This problem involved about, you are given an integer n indicating there are n people numbered from 0 to n - 1. You are also given a 0-indexed 2D integer array meetings where meetings[i] = [xi, yi, timei] indicates that person xi and person yi have a meeting at timei. A person may attend multiple meetings at the same time. Finally, you are given an integer firstPerson.

# Problem description

For better problem description please visit [LeetCode Pages](https://leetcode.com/problems/find-all-people-with-secret/description/)

**Approach :**<br/>

1. `Build Graph`: Construct an undirected graph where each person is represented as a node and each meeting is represented as an edge between two nodes with the meeting time as the weight of the edge.
2. `Earliest Time`: Initialize an array `earliest` to keep track of the earliest time at which each person learns the secret. Initially, set it to INT_MAX for all people except the first person.
3. `DFS Traversal`: Perform a Depth-First Search (DFS) traversal on the graph from both the first person and the person who is considered to have received the secret first. During traversal, update the `earliest` array with the minimum time at which each person learns the secret.
4. `Identify People`: After DFS traversal, iterate through the `earliest` array to identify the people who have learned the secret. If the time recorded for a person is not INT_MAX, it means the person has learned the secret.
5. `Output`: Return the indices of the people who have learned the secret.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(M * (M + N))` - M is the number of meeting, and O(M + N) iis the dfs traversal
-   Space-Complexity: `O(M + N)`
