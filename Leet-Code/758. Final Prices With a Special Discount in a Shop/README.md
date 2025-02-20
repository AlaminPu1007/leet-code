# 1475. Final Prices With a Special Discount in a Shop

This problem involved about, You are given an integer array prices where `prices[i]` is the price of the ith item in a shop.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/)

**Approach :**<br/>

1. `Initialization`:

    - Create a `res` vector initialized with the values of `prices`.
    - Use a stack to track indices of items for which a discount is yet to be determined.

2. `Iterate Through Prices`:

    - For each price at index `i`:
        - While the stack is not empty and the price at the top index of the stack is greater than or equal to the current price:
            - Pop the top index from the stack.
            - Calculate the discount by subtracting the current price from the price at the popped index in the `res` array.
        - Push the current index onto the stack.

3. `Return Result`:
    - The stack ensures we efficiently track and apply discounts as needed.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - `n` is the number of prices
-   Space-Complexity: `O(n)` - we are using an extra stack spaces.
