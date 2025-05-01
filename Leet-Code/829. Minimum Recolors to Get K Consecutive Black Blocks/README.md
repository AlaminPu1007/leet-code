# 2379. Minimum Recolors to Get K Consecutive Black Blocks

This problem involved about, you are given a 0-indexed string blocks of length n, where `blocks[i]` is either 'W' or 'B', representing the color of the ith block. The characters 'W' and 'B' denote the colors white and black, respectively.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description)

**Approach :**<br/>

1. `Maintain a sliding window of size `k``.
2. `Count the number of 'W' in the current window` since these are the blocks that need to be recolored.
3. `Slide the window one block at a time` and update the count dynamically.
4. `Keep track of the minimum recolors required`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We traverse the string once using a sliding window.
-   Space-Complexity: `O(1)` - Only constant amount of spaces are used.
