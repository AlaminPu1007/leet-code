## 2485. Find the Pivot Integer

This problem involved about, given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-pivot-integer/description/)

**Approach :**<br/>

1. Define a helper function `getTotalSum` to calculate the total sum of integers from 1 to n using the formula `(n * (n + 1)) / 2`.
2. Calculate the total sum of integers from 1 to n using the `getTotalSum` function.
3. Iterate through each integer i from 1 to n:
    - Calculate the sum of integers from 1 to i - 1 as the left sum.
    - Calculate the sum of integers from i to n as the right sum.
    - If the left sum equals the right sum, return the current integer i as the pivot integer.
4. If no pivot integer is found, return -1.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n)`- The loop iterates through integers from 1 to n, so the time complexity is O(n).
-   Space-Complexity: `O(1)`
