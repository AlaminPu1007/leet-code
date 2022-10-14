## 334. Increasing Triplet Subsequence

[Problem link](https://leetcode.com/problems/increasing-triplet-subsequence/)

**Problem :**<br>
Given an integer array nums, return true if there exists a triple of indices `(i, j, k)` such that `i < j < k` and `nums[i] < nums[j] < nums[k]`. If no such indices exists, `return false`.

**Approach :**<br>

- check first item and push it to fistItem variable till it's equal to nums[i]
- similar to first step,
- if all condition are satisfied `return true`
- else `return false`

**Complexity :**<br>

- Time-Complexity: `O(n)`
- Space-Complexity: `O(1)`
