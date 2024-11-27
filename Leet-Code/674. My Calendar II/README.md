# 731. My Calendar II

This problem involved about, you are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a triple booking.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/my-calendar-ii/description)

**Approach :**<br/>

#### Step 1: Managing Overlaps

-   We use two lists:
    1. **`non_overlapping`**: Stores intervals that do not overlap with others more than once.
    2. **`overlapping`**: Stores intervals where two events overlap.

#### Step 2: Checking for Triple Overlaps

-   When booking a new event, first check if the event would cause a triple booking by comparing it with the **`overlapping`** intervals. If any part of the new event overlaps with an already overlapping interval, return `false`.

#### Step 3: Updating Overlaps

-   If the event does not cause a triple overlap, update the list of **`overlapping`** intervals. Compare the new event with each interval in **`non_overlapping`**. If there is an overlap, compute the intersection and add it to **`overlapping`**.

#### Step 4: Adding the Event

-   Once the event has been processed and found to be valid, add it to the **`non_overlapping`** list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of bookings made. In each booking operation, we may iterate over the existing overlapping and non-overlapping intervals.

-   Space-Complexity: `O(n)` - as we store all the intervals in both the **`overlapping`** and **`non_overlapping`** lists.
