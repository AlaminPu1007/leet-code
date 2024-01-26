## 560. Subarray Sum Equals K

This problem involved about, given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/subarray-sum-equals-k/description/)

**Approach :**<br/>

1. Initialization:

    - The `subarraySum` function takes a vector of integers `nums` and an integer `k`.
    - It returns the count of subarrays whose sum equals k.

2. Prefix Sum and Hash Map Approach:

    - Utilize a prefix sum array to keep track of the cumulative sum of elements.
    - Use a hash map (`prefixSum`) to store the count of each prefix sum encountered.

3. Algorithm:

    - Initialize variables `res` (result count) and `sum` (current cumulative sum).
    - Iterate through the elements of the input array `nums`.
    - Update the `sum` by adding the current element.
    - Calculate the difference `value = (sum - k)`.
    - If `value` is present in the `prefixSum` hash map, increment the result by the count of that value in `prefixSum`.
    - Update the `prefixSum` hash map with the current `sum`.

4. Result:
    - The function returns the count of `subarrays` whose sum equals k.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N)`, where N is the length of the input array. Each element is processed once.
-   Space-Complexity: `O(N)`, where N is the length of the input array. The space is used for the prefix sum hash map.
