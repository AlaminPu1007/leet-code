## 2073. Time Needed to Buy Tickets

This problem involved about, there are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line. <br/>

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i]. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/time-needed-to-buy-tickets/description/)

**Approach :**<br/>

1. `Iterate Through Tickets`: Traverse through the tickets array.

2. `Calculate Time Required`: For each ticket price:

    - If the ticket index is greater than `(k)`:
        - If the ticket price is greater than or equal to the `(k)`-th ticket price, add k-th ticket price minus 1 to the result.
        - Otherwise, add the current ticket price to the result.
    - If the ticket index is less than or equal to k:
        - If the ticket price is greater than the k-th ticket price, add k-th ticket price to the result.
        - Otherwise, add the current ticket price to the result.

3. `Return Total Time Required`: After iterating through all tickets, return the total time required.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Iterating through the tickets array takes `O(n)` time.
-   Space-Complexity: `O(1)` - the algorithm uses only a constant amount of space.
