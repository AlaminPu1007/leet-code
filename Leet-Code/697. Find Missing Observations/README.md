# 2028. Find Missing Observations

This problem involved about, you have observations of n + m 6-sided dice rolls with each face numbered from 1 to 6. n of the observations went missing, and you only have the observations of m rolls. Fortunately, you have also calculated the average value of the n + m rolls.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-missing-observations/description/)

**Approach :**<br/>

1. `Calculate the Target Total Sum:`

    - The overall sum of all the dice rolls, including both the known `rolls` and the missing dice rolls, should be `mean * (m + n)`, where `m` is the number of known rolls and `n` is the number of missing rolls.

2. `Find the Missing Sum:`

    - Calculate the sum of the known `rolls`, and subtract this from the total sum to find the sum that must be distributed among the missing rolls.

3. `Check for Feasibility:`

    - Ensure that the missing sum can be distributed among `n` rolls, where each roll must have a value between 1 and 6 (inclusive). If the missing sum is too small or too large (i.e., if the sum cannot be achieved with values in the valid dice range), return an empty array.

4. `Distribute the Missing Sum:`
    - Distribute the missing sum across `n` dice rolls. Start by assigning the maximum possible value (6) to each roll as necessary, and ensure that the remaining sum for each roll is within the valid dice range.
5. `Return the Result:`
    - Return the array containing the missing dice rolls.

### Algorithm

1. Compute the total target sum using `mean * (m + n)`.
2. Calculate the sum of the known dice rolls.
3. Compute the missing sum by subtracting the sum of the known rolls from the target total sum.
4. Check if the missing sum is between `n` and `6 * n` (the minimum and maximum possible sums for `n` dice rolls). If not, return an empty array.
5. Distribute the missing sum as evenly as possible across `n` dice rolls.
6. Return the list of missing dice rolls.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + m)` - Where `n` is the time to distribute the missing sum across the `n` rolls and `m` is the time to calculate the sum of the known dice rolls.
-   Space-Complexity: `O(n)` - The additional space is required to store the result array containing the `n` missing dice rolls.