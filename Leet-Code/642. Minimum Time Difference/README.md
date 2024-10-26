# 539. Minimum Time Difference

This problem involved about, given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-time-difference/description)

**Approach ;**<br/>

#### Step 1: Convert Time to Minutes

-   Each time point is converted into its corresponding minute representation from `00:00` using the helper function `getMinutesFromString`, where `time = h * 60 + m`.

#### Step 2: Bucket Sort for Faster Lookup

-   Use a `bucketSort` array of size 1440 (since there are 1440 minutes in a day) to mark whether a particular minute value is present in the time points. This ensures quick lookup and detection of duplicate times.
-   If any time point appears more than once, return `0` as the minimum difference, since two identical time points have a difference of 0.

#### Step 3: Track First and Last Time Points

-   Track the first and last time points (`first_min` and `last_min`), which are used to handle the circular nature of time (i.e., how time wraps around from 23:59 to 00:00).

#### Step 4: Calculate Minimum Difference

-   Calculate the difference between consecutive time points by iterating over the `bucketSort` array.
-   Additionally, compute the circular time difference between the last and first time points in the list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of time points. Converting each time point to minutes and iterating through the `bucketSort` array takes linear time.
-   SpaceComplexity: `O(1)` - space for the `bucketSort` array of fixed size 1440.
