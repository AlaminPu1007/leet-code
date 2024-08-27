## 2997. Minimum Number of Operations to Make Array XOR Equal to K
This problem involved about, you are given a 0-indexed integer array nums and a positive integer k.

# Problem description
For better problem description please visit [LeetCode Pages](https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/description/)

**Approach :**<br/>

1. Calculate the XOR of all elements in the array (`finalXor`).
2. Initialize a variable `count` to store the count of operations.
3. Iterate until both `k` and `finalXor` become zero:
   - Check if the rightmost bit of `k` is different from the rightmost bit of `finalXor`.
   - If they are different, increment the `count`.
   - Right shift both `k` and `finalXor`.


**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - The XOR operation takes `O(1)`, and we iterate over the NNN elements in the array `nums`.

- Space-Complexity: `O(n)` - The space complexity is `O(1)` because the algorithm uses only a constant amount of extra space regardless of the input size.
