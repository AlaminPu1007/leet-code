# 1497. Check If Array Pairs Are Divisible by k

This problem involved about, given an array of integers arr of even length n and an integer k.<br/>
We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/description)

**Approach :**<br/>

The core idea of this solution is based on **modulo arithmetic**:

1. For each element in the array, we calculate its remainder when divided by `k`. This remainder is used to form pairs with another element whose remainder is the complement of the first one, i.e., `(k - remainder)`.
2. The challenge is to ensure that each element with a given remainder can be paired with an element with the complement remainder. If this pairing condition is not satisfied, the array cannot be rearranged as required.

**Algorithm :**<br/>

1. `Modulo Handling`: For each element in the array, calculate its remainder when divided by `k` using `(item % k + k) % k`. This handles negative values gracefully.
2. `Count Frequency`: Maintain a frequency map (`unordered_map<int, int>`) where the key is the remainder and the value is the count of elements with that remainder.
3. `Pairing Logic`:
    - If the remainder is `0`, the number of elements with this remainder must be even, as they can only pair among themselves.
    - For all other remainders, the count of elements with remainder `r` must match the count of elements with remainder `k - r`.
    - If the conditions are not met, return `false`.
4. `Final Check`: If all conditions are met, return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the given array. This is because we make a single pass over the array to compute the remainders and a second pass to check the validity of the pairings.

-   Space-Complexity: `O(n)` - We are using an `extra` hash `map` to store the reminders.