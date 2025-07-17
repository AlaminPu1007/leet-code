# 2179. Count Good Triplets in an Array

This problem involved about, you are given two 0-indexed arrays `nums1 and nums2` of length n, both of which are permutations of `[0, 1, ..., n - 1]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-good-triplets-in-an-array/description/)

**Key Insights :**<br/>

1. `Position Mapping`: Create a mapping from value to index in `nums2` to track positions
2. `Segment Tree`: Use a segment tree to efficiently:
    - Track elements seen so far
    - Query count of elements less than current position
3. `Triplet Calculation`: For each middle element j, calculate valid i and k pairs using:
    - Common elements on left (in both arrays)
    - Common elements on right (in both arrays)

**Algorithm Steps :**<br/>

1. `Position Mapping`: Create a hash map of value to index for `nums2`
2. `Segment Tree Initialization`: Initialize segment tree for range queries
3. `Iterate Through nums1`:
    - For each element, query count of elements before it in both arrays
    - Calculate potential triplets using left and right common elements
    - Update segment tree with current element's position
4. `Return Result`: Accumulated count of valid triplets

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - We iterate over the `nums1` array once (excluding the first and last elements), and for each element, we perform a segment tree update and a range sum query, both of which take `O(log n)` time. Thus, the total time becomes `O(n * log n)`.
-   Space-Complexity: `O(n)` - We use a segment tree of size up to `4 * n` and a hash map to store the index mapping of elements in `nums2`. Both data structures take linear space, resulting in overall `O(n)` space complexity.
