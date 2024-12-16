# 2054. Two Best Non-Overlapping Events

This problem involved about, you are given a 0-indexed 2D integer array of events where `events[i] = [startTimei, endTimei, valuei]`. The ith event starts at `startTimei` and ends at `endTimei`, and if you attend this event, you will receive a value of `valuei`. You can choose at most two non-overlapping events to attend such that the sum of their values is maximized.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/two-best-non-overlapping-events/description/)

**Approach :**<br/>

1. `Sort Events`:

    - Sort the events by their start time to efficiently detect overlaps.

2. `Track Overlaps Using a Min-Heap`:

    - Use a priority queue (`pq`) to track the ending times of events along with their values.

3. `Iterate Through Events`:

    - For each event:
        - Remove events from `pq` that end before the current event's start time. Update `maxValueSeen` with the maximum value of these events.
        - Push the current event's end time and value into the `pq`.

4. `Compute Maximum Value`:
    - Calculate the maximum value by combining the value of the current event with the `maxValueSeen` from earlier non-overlapping events.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the events takes `O(n * log(n))`. Each event is `pushed/popped` into the priority queue at most once, costing `O(log(n))` per operation.

-   Space-Complexity: `O(n)` - For storing events in the priority queue.
