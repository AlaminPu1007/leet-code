# 1701. Average Waiting Time

This problem involved about, There is a restaurant with a single chef. You are given an array customers, where `customers[i] = [arrivali, timei]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/average-waiting-time/description/)

**Approach :**<br/>

1. Initialize `res` to store the total waiting time and `curTime` to track the current time.
2. Iterate through each customer:
    - If the current time is less than the customer's arrival time, update the current time to the customer's arrival time.
    - Calculate the waiting time for the customer as the difference between the time their order is ready and their arrival time.
    - Add the waiting time to the total waiting time.
    - Update the current time by adding the cooking time of the current customer.
3. Return the average waiting time by dividing the total waiting time by the number of customers.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of customers. We iterate through the list of customers once.

-   Space-Complexity: `O(1)` - We use a constant amount of extra space.