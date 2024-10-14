# 995. Minimum Number of K Consecutive Bit Flips

This problem involved about, you are given a binary array `nums` and an integer k. <br/>
A k-bit flip is choosing a `subarray` of length k from `nums` and simultaneously changing every 0 in the `subarray` to 1, and every 1 in the `subarray` to 0. <br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/description/)

**Approach :**<br/>

1. `Sliding Window `: Use a sliding window approach with a queue to keep track of the indices where flips occur.
2. `Queue Usage `: The queue helps in keeping track of the last flip index, allowing us to efficiently manage the window of size `k`.

**Algorithm :**<br/>

1. Initialize a queue `q` to keep track of the last flipped bit.
2. Initialize a variable `res` to store the number of flips.
3. Iterate through each bit in the array `nums`:
    - Remove invalid indices from the queue that are out of the current window of size `k`.
    - Determine if the current bit needs to be flipped by checking if the bit value after accounting for the flips (using the size of the queue) is `0`.
    - If the current bit needs to be flipped:
        1. Check if the flip operation is possible within the bounds of the array. If not, return `-1`.
        2. Add the current index to the queue and increment the flip count `res`.
4. Return the total number of flips `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the array. Each element is processed at most twice, once when it is added to the queue and once when it is removed.

-   Space-Complexity: `O(k)` - where `k` is the size of the window. The queue stores at most `k` indices at any given time