# 2843. Count Symmetric Integers

This problem involved about, you are given two positive integers low and high.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-symmetric-integers/description)

**Key Insights :**<br/>

1. `Digit Length Filtering`: Only 2-digit and 4-digit numbers can be symmetric in the given constraints
2. `Symmetric Checks`:
    - For 2-digit numbers: Check if number is divisible by 11
    - For 4-digit numbers: Compare sum of first two digits with sum of last two digits

**Algorithm Steps :**<br/>

1. `Iterate through Range`: Check each number from `low` to `high`
2. `Check 2-digit Numbers`: For numbers between 10-99, check divisibility by 11
3. `Check 4-digit Numbers`: For numbers between 1000-9999, compare digit sums
4. `Count Valid Numbers`: Increment count for each symmetric number found

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N = high - low + 1
-   Space-Complexity: `O(1)` - additional space
