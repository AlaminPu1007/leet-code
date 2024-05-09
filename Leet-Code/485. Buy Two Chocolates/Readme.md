## 2706. Buy Two Chocolates

This problem involved about, You are given an integer array prices representing the prices of various chocolates in a store. You are also given a single integer money, which represents your initial amount of money.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/buy-two-chocolates/description/)

**Approach :**<br/>

1. Initialize two variables firstMinimum and secondMinimum to INT_MAX.
2. For each price in the prices array:
    - If the current price is less than firstMinimum, update both firstMinimum and secondMinimum.
    - If the current price is between firstMinimum and secondMinimum, update only secondMinimum.
3. Calculate the cost of buying chocolates using the two minimum prices:
    - cost = money - (secondMinimum + firstMinimum).
4. If the calculated cost is non-negative, return the cost. If the cost is negative, return the available money.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the size of the prices array
-   Space-Complexity: `O(1)` - as the algorithm uses a constant amount of extra space regardless of the input size.
