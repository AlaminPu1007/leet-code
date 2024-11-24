# 1310. XOR Queries of a Subarray

This problem involved about, you are given an array arr of positive integers. You are also given the array queries where `queries[i] = [lefti, righti]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/xor-queries-of-a-subarray/description)

**Approach :**<br/>

1.  We preprocess the array by calculating a prefix XOR array `prefixXorSum`, where `prefixXorSum[i]` contains the XOR of all elements from the beginning of the array to index `i-1`. This allows us to compute the XOR of any subarray efficiently.

    -   `prefixXorSum[i + 1] = prefixXorSum[i] ^ arr[i]`

2.  For each query, the XOR of the subarray can be computed as:

    -   `prefixXorSum[left] ^ prefixXorSum[right + 1]`
        This efficiently gives the result for each query in constant time.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of elements in the input array.
-   Space-Complexity: `O(n)` - for storing the prefix XOR array
