## 319. Bulb Switcher

This problem involved about, There are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.<br/>

On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/bulb-switcher/description/)

**Approach :**<br/>

1. For each bulb, toggle its state based on its position in the sequence of toggles.
2. Initially, all bulbs are off. We start with the first bulb and toggle it, then toggle every second bulb, then every third bulb, and so on until we reach the nth bulb.
3. After the nth toggle, the state of each bulb corresponds to whether its position has an odd or even number of factors (divisors).
4. A bulb will be on only if it has an odd number of factors, which happens only for perfect square positions.
5. Therefore, the number of bulbs that remain on after n toggles is equal to the number of perfect square numbers less than or equal to n.
6. We can calculate the number of perfect square numbers less than or equal to n by taking the integer square root of n.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` - The algorithm has a constant time complexity because it performs a single computation to calculate the integer square root of n.

-   Time-Complexity: `O(1)`- The algorithm uses only a constant amount of extra space.
