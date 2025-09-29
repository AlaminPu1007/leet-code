# 1011. Capacity To Ship Packages Within D Days

This problem involved about, a conveyor belt has packages that must be shipped from one port to another within days days.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/)

**Key Insights :**<br/>

1. `Binary Search Applicability`: The solution space is monotonic - if capacity `x` can ship all packages in ≤ `k` days, then any capacity > `x` can also do it.
2. `Search Boundaries`:
    - Minimum capacity needed is the weight of the heaviest package (must be able to carry at least one package)
    - Maximum capacity needed is the total weight of all packages (could ship everything in one day)
3. `Validation Function`: For a given capacity, we can check how many days are needed to ship all packages.

**Algorithm Steps :**<br/>

1. `Initialize Search Boundaries`:
    - `low` = maximum package weight
    - `high` = total weight of all packages
2. `Binary Search`:
    - Calculate `mid` capacity
    - Use `isValid()` to check if `mid` capacity can ship within `k` days
    - Adjust search boundaries based on validation result
3. `Validation Function (`isValid`)`:
    - Count how many days are needed for current capacity
    - Return true if days ≤ `k`, false otherwise

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(m))` - where `m` is the total weight of all packages. `n` for each binary search iteration.
-   Space-Complexity: `O(1)` - additional space used.
