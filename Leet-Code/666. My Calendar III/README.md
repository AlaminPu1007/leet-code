# 732. My Calendar III

This problem involved about, a k-booking happens when k events have some non-empty intersection (i.e., there is some time that is common to all k events.)

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/my-calendar-iii/description/)

**Approach :**<br/>

#### Step 1: Use a Map to Track Event Start and End

-   We use a `map<int, int>` to record the **start** and **end** times of each booking.
    -   **Start time** is marked with a `+1` to indicate the event starts.
    -   **End time** is marked with a `-1` to indicate the event ends.

#### Step 2: Track Maximum Overlapping Events

-   After each booking, we traverse the map and compute the number of ongoing events at any time.
-   The sum of the `map` values during traversal gives the current count of ongoing events.
-   Update the `maxCount` to track the highest number of overlapping events encountered.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where `n` is the number of bookings. Each booking requires inserting two elements into the map (start and end times), which takes logarithmic time due to the balanced nature of the map. Then, we traverse the map to update the maximum count, which takes linear time.

-   Space-Complexity: `O(n)` - as we store all the start and end times of the bookings in the map.
