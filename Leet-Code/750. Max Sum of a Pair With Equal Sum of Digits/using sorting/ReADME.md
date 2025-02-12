# 2342. Max Sum of a Pair With Equal Sum of Digits

This problem involved about, you are given a 0-indexed array `nums` consisting of positive integers. You can choose two indices `i and j`, such that `i != j`, and the sum of digits of the number `nums[i]` is equal to that of `nums[j]`

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description)

**Approach :**<br/>

1. `Calculate the Digit Sum`:

    - Define a helper function `digitSum(int num)` to compute the sum of digits of a number.
    - Example: `digitSum(368) = 3 + 6 + 8 = 17`.

2. `Store Pairs in a List`:

    - Store each number along with its digit sum as `{digitSum, num}` in a vector.

3. `Sort the List`:

    - Sort the vector based on `digitSum`. This allows adjacent elements to have the same digit sum.

4. `Find the Maximum Sum`:
    - Iterate through the sorted list.
    - Whenever two adjacent elements have the same `digitSum`, compute their sum and update the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting takes `O(n * log(n))`.
-   Space-Complexity: `O(n)` - for storing pairs of numbers and digit sums.
