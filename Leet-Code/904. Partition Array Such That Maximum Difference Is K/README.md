# 2294. Partition Array Such That Maximum Difference Is K

This problem involved about, you are given an integer array `nums` and an integer k. You may partition `nums` into one or more subsequences such that each element in `nums` appears in exactly one of the subsequences.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/description)

**Key Insights :**<br/>

1. `Sorting`: Sorting the array allows us to easily find elements within the required range
2. `Greedy Grouping`: We can form groups by maintaining the smallest element in the current group and adding elements until the difference exceeds k
3. `Single Pass`: After sorting, we only need one pass through the array to form the groups

**Algorithm Steps :**<br/>

1. `Sort the Array`: Arrange elements in non-decreasing order
2. `Initialize Variables`:
    - Set result counter to 1 (minimum one group)
    - Track the minimum element of the current group
3. `Iterate Through Array`:
    - For each element, check if it can be part of the current group (difference ≤ k)
    - If not, start a new group and update the minimum element
4. `Return Result`: The total number of groups formed

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting array required `O(n * log(n))` time complexity.
-   Space-Complexity: `O(n)` - sorting required `O(n)` spaces.
