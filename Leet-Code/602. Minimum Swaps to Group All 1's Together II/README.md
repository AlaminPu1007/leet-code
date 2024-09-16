# 2134. Minimum Swaps to Group All 1's Together II

This problem involved about, a swap is defined as taking two distinct positions in an array and swapping the values in them.
A circular array is defined as an array where we consider the first element and the last element to be adjacent.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/)

**Approach :**<br/>

1. `Count Total Number of 1's `:

    - Iterate through the array to count the total number of 1's (`total_ones`).

2. `Sliding Window to Find Maximum 1's `:

    - Use a sliding window of size equal to `total_ones` to find the maximum number of 1's that can be grouped together.
    - Extend the array conceptually to `2n` by using modulo operation to simulate the circular nature of the array.

3. `Calculate Minimum Swaps `:

    - The minimum number of swaps required is `total_ones` minus the maximum number of 1's found in any window of size `total_ones`.

**Detailed Algorithm :**<br/>

1. `Count Total Number of 1's`:

    - Initialize `total_ones` to 0.
    - Iterate through `nums`, incrementing `total_ones` for each 1 encountered.

2. `Sliding Window `:

    - Initialize `no_of_ones_cur_window` and `max_window` to 0.
    - Use a sliding window of size `total_ones` to find the maximum number of 1's:
        - Iterate through `nums` from `0` to `2n` (simulating the circular array using modulo operation).
        - Increment `no_of_ones_cur_window` if the current element is 1.
        - Adjust the window size by decrementing `no_of_ones_cur_window` when the window exceeds `total_ones`.
        - Update `max_window` with the maximum value of `no_of_ones_cur_window`.

3. `Calculate Minimum Swaps `:
    - The result is `total_ones - max_window`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2*n) => O(n)` -N is the size of the input array. This is because we iterate through the array a constant number of times.
-   Space-Complexity: `O(n)` - as we only use a fixed amount of extra space for variables and do not require any additional data structures that grow with the input size.
