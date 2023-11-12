## 1793. Maximum Score of a Good Subarray

This problem involved about, you are given an array of integers `nums` `(0-indexed)` and an integer k. Return the maximum possible score of a good subarray.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-score-of-a-good-subarray/description)

**Approach :**<br/>

-   Use a loop to proceed this procedure until `l == 0` and `r == len-1`. In the iteration, update `cur_min=min(cur_min, nums[l], nums[r])` and `res=max(res, cur_min * (r - l + 1))`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - for counting `sub-array` using two pointer approach, has time complexity `O(n)`
-   Space-Complexity; `O(1)` - using constant spaces
