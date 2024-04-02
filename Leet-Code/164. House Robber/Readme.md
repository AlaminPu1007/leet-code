## House Robber

[Visit Problem](https://leetcode.com/problems/house-robber/description/)

**Approach :**<br>
Change the array to store, what is the maximal money you can rob for now. Therefore, every time you only have to consider, it is better to rob current house plus last last house OR keep what you rob from the previous house.<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
-

## Memoization technique

**Approach for memoization :**<br/>

1. Initialize a vector `dp` of size `n` to store the maximum amount of money that can be robbed up to index `i`, initialized with `-1`.
2. Check if the given array `nums` is empty. If it is, return `0`.
3. Call the recursive function `DFS` with parameters `n - 1`, `nums`, and `dp`.
4. In the `DFS` function:
    - Base cases:
        - If the current index `i` is `0`, return the value of the first house.
        - If `i` becomes less than `0`, return `0`.
        - If the value of `dp[i]` is not equal to `-1`, return `dp[i]`.
    - Recursively calculate the maximum amount of money that can be robbed:
        - If the current house is chosen (`pick`):
            - Add the value of the current house `nums[i]` to the maximum amount that can be robbed from the house `i - 2`.
        - If the current house is not chosen (`notPick`):
            - Return the maximum amount that can be robbed from the house `i - 1`.
    - Store the result in `dp[i]` as the maximum of `pick` and `notPick`.
5. Return the maximum amount of money that can be robbed from all the houses, stored at index `n - 1` in `dp`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) - The time complexity of this approach is O(n), where n is the number of houses. This is because each house is visited only once in the dynamic programming recursion.
-   Space-Complexity: `O(n) - The time complexity of this approach is O(N), where N is the dp array

## Tabulation Approach

1. Initialize a vector `dp` of size `n`, where `n` is the number of houses. Each element of `dp` will represent the maximum amount of money that can be robbed up to and including the `i`-th house.
2. Initialize `dp[0]` with the value of the first house, as there is only one house to rob initially.
3. Iterate through the houses starting from the second house (`i = 1`) up to the last house:
    - For each house `i`, calculate the maximum amount of money that can be robbed:
        - `pick`: The amount of money that can be robbed if the current house is chosen. This is the value of the current house `nums[i]`, plus the maximum amount that can be robbed from the house `i - 2` (if `i > 1`).
        - `notPick`: The maximum amount that can be robbed without choosing the current house, which is the maximum amount that can be robbed from the house `i - 1`.
    - Update `dp[i]` to be the maximum of `pick` and `notPick`.
4. Return `dp[n - 1]`, which represents the maximum amount of money that can be robbed from all the houses.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) - The time complexity of this approach is O(n), where n is the number of houses. This is because each house is visited only once in the dynamic programming recursion.
-   Space-Complexity: `O(n) - The time complexity of this approach is O(N), where N is the dp array

**References :**<br/>

-   [From a blog](https://takeuforward.org/data-structure/maximum-sum-of-non-adjacent-elements-dp-5/)
