## 2441. Largest Positive Integer That Exists With Its Negative
This problem involved about, given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description)

**Approach :**<br/>

1. Initialize an unordered set `st` with the elements of the input array `nums`.
2. Initialize `res` to -1, which will store the maximum value of `abs(item)` such that `-item` exists in the set.
3. Iterate through each element `item` in `nums`:
   - Check if `-item` exists in the set `st`. If yes, update `res` to the maximum of its current value and `abs(item)`.
4. Return `res`, which represents the maximum value of `abs(item)` such that `-item` exists in the set.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` -  The time complexity of the algorithm is `O(N)`, where N is the size of the input array `nums`. This is because we iterate through each element of `nums` once to build the set and check for the existence of `-item`.

- Space-Complexity: `O(n)` -  The space complexity is `O(N)` as we use additional space to store the elements of the input array `nums` in the set `st`.

