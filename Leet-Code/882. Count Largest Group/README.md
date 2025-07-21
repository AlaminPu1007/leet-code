# 1399. Count Largest Group

This problem involved about, you are given an integer n. Each number from 1 to n is grouped according to the sum of its digits.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-largest-group/description)

**Key Insights :**<br/>

1. `Digit Sum Calculation`: For each number, compute the sum of its digits to determine its group
2. `Group Tracking`: Use a hash map to count how many numbers belong to each digit sum group
3. `Maximum Size Identification`: Find the maximum group size in the hash map
4. `Count Groups`: Count how many groups have this maximum size

**Algorithm Steps :**<br/>

1. `Initialize Variables`:

    - `maxValue` to track largest group size
    - Hash map to store group sizes
    - `res` to count groups with maximum size

2. `Process Numbers`:

    - For each number from 1 to n:
        - Calculate its digit sum
        - Update hash map count for this sum
        - Track maximum group size

3. `Count Largest Groups`:

    - Iterate through hash map
    - Count groups with size equal to `maxValue`

4. `Return Result`: The count of largest groups

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - The time complexity for calculating the sum of digits of x is `O(log10​x)=O(logx)`, so the total time required is `O(n * log(n))`.
-   Space-Complexity: `O(log(n))` - Using a hash map as auxiliary space, the number of digits of n is `O(log10(n))`
