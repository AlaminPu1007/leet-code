# 1248. Count Number of Nice Subarrays

This problem involved about, given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-number-of-nice-subarrays/description/)

**Approach :**<br/>

1. **Prefix Sum with Hash Map:**
    - Use a prefix sum approach to count the number of subarrays ending at each position that have exactly `k` odd numbers.
    - Use a hash map to store the count of prefix sums, allowing efficient calculation of the number of subarrays with a specific sum.

**Algorithm :**<br/>

1. **Initialization:**

    - Initialize a hash map `prefixSum` to store the count of prefix sums, with an initial value of `prefixSum[0] = 1` to handle cases where the subarray starts at the beginning.
    - Initialize variables `res` to store the result, and `sum` to store the current prefix sum.

2. **Iterate Over the Array:**

    - For each element in `nums`:
        - Update `sum` by adding `1` if the current element is odd (`nums[i] % 2`), otherwise add `0`.
        - Calculate the required prefix sum (`sum - k`) that would make the current prefix sum equal to `k`.
        - If this required prefix sum exists in the hash map, add its count to `res`.
        - Update the hash map with the current prefix sum.

3. **Return Result:**
    - Return the value of `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the `nums` array, due to the single pass required to compute the result.
-   Space-Complexity: `O(n)` - due to the hash map used to store the prefix sums.
