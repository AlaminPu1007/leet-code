# 729. My Calendar I

This problem involved about, you are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a double booking. <br/>

A double booking happens when two events have some non-empty intersection (i.e., some moment is common to both events.).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/my-calendar-i/description/)

### SOLUTION - 1 (Brute force approach)(Accepted)

**Approach :**<br/>
We will maintain a list of interval events (not necessarily sorted). Evidently, two events `[s1, e1) and [s2, e2)` do not conflict if and only if one of them starts after the other one ends: either `e1 <= s2 OR e2 <= s1`. By De Morgan's laws, this means the events conflict when `s1 < e2 AND s2 < e1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n ^ 2)` - For each new event, we process every previous event to decide whether the new event can be booked.
-   Space-Complexity: `O(n)` - the size of the calendar