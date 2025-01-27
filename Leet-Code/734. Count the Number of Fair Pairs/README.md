# 2563. Count the Number of Fair Pairs

This problem involved about, given a 0-indexed integer array `nums` of size n and two integers lower and upper, return the number of fair pairs.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-the-number-of-fair-pairs/description/)

**Approach :**<br/>

1. `Sort the Array`:

    - First, sort the array `nums` in ascending order. Sorting helps in efficiently searching for the valid pairs using binary search.

2. `Iterate Through the Array`:

    - For each element `nums[i]`, calculate the minimum value (`low_b`) and maximum value (`up_b`) that the second number `nums[j]` must satisfy to form a valid pair:
        - `low_b = lower - nums[i]`
        - `up_b = upper - nums[i]`

3. `Binary Search`:

    - For each `nums[i]`, find how many `nums[j]` values (where `j > i`) satisfy `low_b <= nums[j] <= up_b` using binary search. We use a binary search algorithm to find the range of values in `nums` that fit the criteria for each `nums[i]`.

4. `Count Valid Pairs`:

    - The binary search will give the indices of the lower and upper bounds for valid values of `nums[j]`, and the number of valid pairs is the difference between these bounds.

5. `Return the Result`:
    - The final result will be the total number of valid pairs across all `i`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting the array takes `O(n log n)`, and for each element `nums[i]`, we perform two binary searches which take `O(log n)` time. Thus, the overall time complexity is dominated by the sorting step and binary search operations.

-   Space-Complexity: `O(1)` - We only use a constant amount of extra space for counting pairs, aside from the input array.
