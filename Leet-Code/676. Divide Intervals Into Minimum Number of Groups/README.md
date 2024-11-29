# 2406. Divide Intervals Into Minimum Number of Groups

This problem involved about, you are given a 2D integer array intervals where `intervals[i] = [lefti, righti]` represents the inclusive interval `[lefti, righti]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/description/)

**Approach :**<br/>

#### Step 1: Extract and Sort Start and End Times

-   First, we extract the start and end times of the intervals into two separate arrays: `start` and `end`.
-   Sort both arrays to handle the intervals in chronological order.

#### Step 2: Two-Pointer Technique to Track Overlaps

-   Use a two-pointer approach:
    -   `i` points to the current start time in the `start` array.
    -   `j` points to the current end time in the `end` array.
-   For each interval:
    1. If `start[i] <= end[j]`, a new interval starts before the previous one ends, so we increase the group count.
    2. If `start[i] > end[j]`, the current group ends, so we decrease the group count.

#### Step 3: Track Maximum Group Count

-   While traversing the `start` and `end` arrays, keep track of the maximum number of overlapping intervals, which determines the minimum number of groups required.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting have required `O(n*log(n))` time complexity
-   Space-Complexity: `O(n)` - space to store the `start` and `end` arrays.
