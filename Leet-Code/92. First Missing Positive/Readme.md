# 41. First Missing Positive

Problem link: https://leetcode.com/problems/first-missing-positive/

**Problem :**<br>
Given an unsorted integer array nums, return the smallest missing positive integer.<br>

You must implement an algorithm that runs in O(n) time and uses constant extra space.<br>

**Approach :**<br>
Put each number in its right place.<br>
Example: <br>

- When we find 5, then swap it with nums[4].
- At last, the first place where its number is not right, return the place + 1.

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(1)<br>

```
For anyone who doubts on the complexity of this algorithm: just consider position with nums[i] = i+1 as a CORRECT SLOT.

CORRECT SLOT will never be changed: for CORRECT SLOT, nums[nums[i] - 1] always equals to nums[i], vice versa (1)
For each swap, the number of CORRECT SLOT increases by at least 1: Position nums[nums[i] - 1] = nums[i] becomes a CORRECT SLOT after swap, and according to (1), this must be a new CORRECT SLOT
The maximum of CORRECT SLOT <= N
Therefore, the complexity is O(N)
```
