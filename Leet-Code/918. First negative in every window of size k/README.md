# First negative in every window of size k

This problem involved about, given an array arr[] and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

## Problem description

For better problem description, please visit [GFG](https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1)

**Key Insights :**<br/>

1. `Sliding Window Technique`: We need to process each window of size `k` efficiently as it moves through the array.
2. `Negative Tracking`: Maintain a list of negative numbers in the current window to quickly access the first one.
3. `Window Maintenance`: As the window slides, we need to:
    - Add new elements to our tracking if they're negative
    - Remove elements that are no longer in the window

**Algorithm Steps :**<br/>

1. `Initialize`:
    - Left pointer `j` to track window start
    - Result vector to store answers
    - List to maintain negative numbers in current window
2. `Iterate through array`:
    - For each element, if negative, add to our list
    - When window size reaches `k`:
        - Get first negative from list (or 0 if none)
        - Remove leftmost element from list if it's exiting the window
        - Move left pointer forward
3. `Return` the result vector

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is array size.
-   Space-Complexity: `O(n)` - dominated by output size
