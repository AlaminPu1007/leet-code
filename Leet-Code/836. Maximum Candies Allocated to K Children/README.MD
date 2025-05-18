# 2226. Maximum Candies Allocated to K Children

This problem involved about, you are given a 0-indexed integer array candies. Each element in the array denotes a pile of candies of size candies[i]. You can divide each pile into any number of sub piles, but you cannot merge two piles together.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description)

**Approach :**<br/>

1. `Calculate the total number of candies.`

    - If `sum(candies) < k`, it is `impossible` to distribute at least `1` candy per child, so return `0`.

2. `Binary search on the possible answer (size of candies per child).`

    - `low = 1` (minimum possible candies per child).
    - `high = sum(candies) / k` (maximum possible candies per child).
    - `Binary search to find the highest possible value` such that all children get at least `target` candies.

3. `Check feasibility using a helper function` `isPossibleDistribute()`
    - Count how many children can receive at least `target` candies.
    - If the count is `greater than or equal to k`, increase `low` to find a larger possible number.
    - Otherwise, reduce `high`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Since we perform `O(log(n))` binary search steps, and each step runs in `O(n)`.
-   Space-Complexity: `O(1)` - We are used few constant amount of spaces.
