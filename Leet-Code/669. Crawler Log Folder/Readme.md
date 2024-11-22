# 1598. Crawler Log Folder

This problem involved about, the `Leetcode` file system keeps a log each time some user performs a change folder operation.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/crawler-log-folder/description)

**Approach :**<br/>

1. Initialize an empty stack `st`.
2. Iterate through each log entry:
    - If the stack is not empty and the log entry is `"../"`, pop the stack to move one folder up.
    - If the log entry is not `"./"` or `"../"`, push the log entry onto the stack to represent moving into a subfolder.
3. The size of the stack at the end represents the minimum operations needed to return to the main folder.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of log entries. We iterate through the list of logs once.

-   Space-Complexity: `O(n)` - where `n` is the number of log entries. In the worst case, all log entries are subfolder moves and are stored in the stack.