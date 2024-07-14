# 1051. Height Checker

This problem involved about,a school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/height-checker/description/)

**Approach :**<br/>

1. **Counting Sort**:

    - Initialize a frequency array `temp` of size 101 (assuming height values are within the range 1 to 100).
    - Traverse the `heights` array and count the frequency of each height.
    - Use the frequency array to construct the sorted `heights` array.

2. **Count Discrepancies**:

    - Compare the original `heights` array with the sorted array.
    - Count how many indices have different values in the original and sorted arrays.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n + k)` - where `n` is the number of elements in the array and `k` is the range of the input values (in this case, 101).

-   Space-Complexity: `O(n)` - for the counting sort frequency array and `O(n)` for the sorted array, resulting in `O(n + k)`. Again, since `k` is constant, this simplifies to `O(n)`.