# 1590. Make Sum Divisible by P

This problem involved about, given an array of positive integers `nums`, remove the smallest `subarray` (possibly empty) such that the sum of the remaining elements is divisible by p. It is not allowed to remove the whole array.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/make-sum-divisible-by-p/description/)

**Approach :**<br/>

The main idea is to reduce the problem to finding a `subarray` whose sum, when removed, leaves the remaining sum divisible by `p`. This is efficiently handled using `prefix sums` and `modulo arithmetic`:

1. First, compute the total sum of the array modulo `p`. If it is already divisible by `p`, return `0` (since no `subarray` needs to be removed).
2. If not, calculate the `target remainder` `total_sum % p` that we need to remove in order to make the remaining sum divisible by `p`.
3. The problem then becomes finding the smallest `subarray` whose sum leaves the remainder equal to `target` when removed.

**Algorithm :**<br/>

1. `Modulo Handling`:
    - Iterate over the array and compute the cumulative prefix sum modulo `p`.
    - Use a hash map (`unordered_map<int, int>`) to store the index of each modulo value, tracking where each remainder occurs.
2. `Target Modulo`:
    - Calculate the remainder of the total sum modulo `p`. This is the value that needs to be removed from some prefix sum to balance the overall sum to be divisible by `p`.
3. `Prefix Sum Check`:
    - For each index `i`, compute the current prefix sum modulo `p` and calculate what modulo value is required (`needed = (cur_sum - target + p) % p`) to balance the sum.
    - If the `needed` value exists in the map, compute the length of the `subarray` to remove and update the result to the smallest size found so far.
4. `Return the Result`:
    - After checking all possible `subarrays`, if a valid subarray is found, return its length. If no such subarray can be found, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of elements in the array. We perform a single pass over the array to calculate the total sum and then a second pass to check the `subarrays`. Each hash map operation (insertion and lookup) is `O(1)` on average.

-   Spaces-Complexity: `O(n)` - where `n` is the number of elements in the array. The hash map stores the prefix sums modulo `p`, which can have up to `n` unique values in the worst case.