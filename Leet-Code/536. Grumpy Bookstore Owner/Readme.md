# 1052. Grumpy Bookstore Owner

This problem involved about, there is a bookstore owner that has a store open for n minutes. Every minute, some number of customers enter the store. You are given an integer array customers of length n where customers[i] is the number of the customer that enters the store at the start of the ith minute and all those customers leave after the end of that minute.<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/grumpy-bookstore-owner/description/)

**Approach :**<br/>

1. **Initialization:**

    - Initialize `max_window` to store the maximum additional customers that can be satisfied in any window.
    - Initialize `satisfiedSum` to store the sum of satisfied customers when the owner is not grumpy.
    - Initialize `window` to store the additional satisfied customers for the current window.

2. **Sliding Window to Calculate Maximum Additional Satisfaction:**

    - Iterate over each minute.
    - If the owner is grumpy at the current minute (`grumpy[right] == 1`), add the number of customers at that minute to `window`.
    - Otherwise, add the number of customers to `satisfiedSum`.
    - Maintain a window of size `minutes` by adjusting the `left` pointer:
        - If the window size exceeds `minutes`, check if the minute at the `left` pointer was a grumpy minute and adjust `window` accordingly.
        - Move the `left` pointer to the right.
    - Update `max_window` to be the maximum value of `window`.

3. **Return Result:**
    - Return the sum of `satisfiedSum` and `max_window`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the `customers` array, due to the single pass required to compute the maximum window and the initial satisfaction sum.

-   Space-Complexity: `O(n)` - since only a few additional variables are used.
