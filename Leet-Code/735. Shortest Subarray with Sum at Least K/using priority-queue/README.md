# 862. Shortest Subarray with Sum at Least K

This problem involved about, given an integer array `nums` and an integer k, return the length of the shortest non-empty `subarray` of `nums` with a sum of at least k. If there is no such `subarray`, return -1.

## Problem description

For better problem description, please visit [LeetCode Page]()

**Approach :**<br/>

1. `Prefix Sum Calculation`:

    - Maintain a running sum (`prefix_sum`) while iterating through the array. This allows us to calculate the sum of any subarray in constant time.

2. `Priority Queue for Optimization`:

    - Use a min-heap to store pairs of `{prefix_sum, index}`. This structure helps track the smallest prefix sum observed so far and its index, enabling efficient computation of valid subarrays.

3. `Check Valid Subarray`:

    - At each index `i`, check if the current `prefix_sum` itself satisfies the condition (`prefix_sum >= k`).
    - Additionally, use the heap to find the shortest subarray that satisfies the condition by subtracting the smallest prefix sum in the heap from the current `prefix_sum`.

4. `Update Result`:

    - Update the minimum subarray length whenever a valid subarray is found.

5. `Return Result`:
    - If no valid subarray is found, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - The loop iterates through `nums` once (`O(n)`), and each heap operation (insertion or removal) is logarithmic in size (`O(log n)`).
-   Space-Complexity: `O(n)` - The heap stores up to `n` elements in the worst case.
