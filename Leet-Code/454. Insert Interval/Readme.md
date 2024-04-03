## 57. Insert Interval

This problem involved about, you are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

# Problem description

For better problem solution, please visit [LeetCode Pages](https://leetcode.com/problems/insert-interval/description)

**Approach :**<br/>

1. Initialize an empty vector `res` to store the merged intervals.
2. Iterate through the given `intervals`:
    - If the end of the current interval is less than the start of the `newInterval`, add the current interval to `res`.
    - If there is an overlap between the current interval and the `newInterval`, update the `newInterval` to merge both intervals.
    - If the start of the current interval is greater than the end of the `newInterval`, stop iterating (no further merging is needed).
3. Add the merged `newInterval` to `res`.
4. Add the remaining intervals (if any) from the original `intervals` to `res`.
5. Return `res`, which contains the merged intervals.

**Complexity Analysis :**<br/>

-   Time Complexity:`O(n)` - The algorithm iterates through the intervals once, performing constant-time operations within the loop.

-   Space Complexity: `O(n)` - We are using an extra `res` array to store the results.
