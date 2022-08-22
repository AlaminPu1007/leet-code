# 53. Maximum Subarray

problem link: https://leetcode.com/problems/maximum-subarray/

**Problem :**<br>
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.<br>

A subarray is a contiguous part of an array.<br>

**Approach ::**<br>
We have to keep track maximum sum of an element, which summation must be grater than to 0<br>
note: if summation is going to less than 0, we need to make sum to 0<br>

```
for i = 0 to len-1
sum += nums[i]

if max < sum
max := sum

if sum < 0
sum = 0

end

return max
```

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(1)<br>
