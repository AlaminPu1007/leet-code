# 2582. Pass the Pillow

This problem involved about, there are n people standing in a line labeled from 1 to n. The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/pass-the-pillow/description/)

**Approach :**<br/>

To solve this problem, we just need to get how many round need to be complete. For this just calculate `time / (n-1)`, where `(n-1)` is the ops or gap from `1 to n`.<br/>

Then, calculate the current position of `pillow`. If `round` is even that means it in `left to right` direction else `right to left`. <br/>

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` - since all operations are arithmetic and take constant time.

-   Space-Complexity: `O(1)` - since no additional space proportional to the input size is used.
