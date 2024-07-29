## 446. Arithmetic Slices II - Subsequence

This problem involved about, given an integer array `nums`, return the number of all the arithmetic subsequences of `nums`.<br/>

A sequence of numbers is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/arithmetic-slices-ii-subsequence/description/)

**Approach :**<br/>

-   Initializes an array of unordered maps (`Map`) to store the frequency of differences between elements.
-   Initializes a variable `res` to store the result.
-   Iterates through each element in the sequence (`nums`) and computes the difference with preceding elements.
-   Updates the frequency of differences in the corresponding map and adds the count to the result.
-   Returns the total count of arithmetic slices.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` -The nested loop iterates over all pairs of elements in the input array.

-   Space-Complexity: `O(n^2)` - Each element of the `Map` array stores a frequency map
