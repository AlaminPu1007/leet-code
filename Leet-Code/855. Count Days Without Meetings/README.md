# 3169. Count Days Without Meetings

This problem involved about, you are given a positive integer days representing the total number of days an employee is available for work (starting from day 1). You are also given a 2D array meetings of size n where, `meetings[i] = [start_i, end_i]` represents the starting and ending days of meeting i (inclusive).

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-days-without-meetings/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a total number of days `days` and a list of meetings, where each meeting is represented as `[start, end]`.
    - The goal is to count the number of days that are `not covered by any meeting`.

2. `Algorithm`:

    - Sort the meetings based on their start times.
    - Iterate through the sorted meetings and keep track of the last day covered by any meeting (`lastEnd`).
    - For each meeting, calculate the number of free days between the end of the last meeting and the start of the current meeting.
    - After processing all meetings, calculate the number of free days after the last meeting.
    - Sum up all the free days to get the result.

3. `Steps`:
    - Sort the `meetings` array based on the start time.
    - Initialize `res` to `0` and `lastEnd` to `0`.
    - Iterate through the sorted meetings:
        - If there is a gap between the end of the last meeting and the start of the current meeting, add the number of free days to `res`.
        - Update `lastEnd` to be the maximum of its current value and the end of the current meeting.
    - Add the number of free days after the last meeting to `res`.
    - Return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the meetings takes `O(n * log(n))`.
-   Space-Complexity: `O(n)` - sorting requires extra `O(n)` space.
