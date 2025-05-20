# 2560. House Robber IV

This problem involved about, there are several consecutive houses along a street, each of which has some money inside. There is also a robber, who wants to steal money from the homes, but he refuses to steal from adjacent homes.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/house-robber-iv/description)

**Approach :**<br/>

1. `Define the search space`:

    - The smallest possible selected value is `1` (minimum possible `nums[i]`).
    - The largest possible selected value is `max(nums)`.

2. `Binary search on the possible answer (`mid`)`:

    - Check if we can `select `k` non-adjacent elements` where the maximum selected value is at most `mid`.
    - If possible, try to minimize `mid` by shifting `high = mid - 1`.
    - Otherwise, increase `mid` (`low = mid + 1`).

3. `Greedy selection strategy (`is_valid()`)`:
    - Iterate through `nums`, selecting elements `only if they are ≤ mid` and ensuring non-adjacency`.
    - Stop early if we have selected `k` elements.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(m))` - Checking feasibility `is_valid` can cost `O(n)` & binary search can cost `O(log(m))`.
-   Space-Complexity: `O(1)` - Only few amount of constant spaces are used.
