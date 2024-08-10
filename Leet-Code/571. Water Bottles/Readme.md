# 1518. Water Bottles

This problem involved about, there are numBottles water bottles that are initially full of water. You can exchange numExchange empty water bottles from the market with one full water bottle.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/water-bottles/description/)

**Approach :**<br/>

1. Initialize variables for the result `res` (total bottles drank) and `empty` (empty bottles).
2. Use a loop to simulate drinking and exchanging bottles:
    - Add the number of current full bottles to the result.
    - Add the number of current full bottles to the empty count.
    - Calculate the number of new full bottles from the empty bottles.
    - Update the empty bottles count to reflect the remainder after the exchange.
3. Continue the process until there are no more full bottles to drink.
4. Return the total count of bottles drank.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of exchanges until no more bottles can be exchanged. This is because each exchange reduces the total count of bottles.

-   Time-Complexity: `O(1)` - as we are using only a constant amount of extra space.