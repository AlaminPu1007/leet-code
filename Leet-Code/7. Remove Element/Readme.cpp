
# 27. Remove Element
https://leetcode.com/problems/remove-element/

**Problem :**

Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.<br>

**Solution :**

When we encounter nums[i] = valnums[i]=val, we can swap the current element out with the last element and dispose the last one. <br>
This essentially reduces the array's size by 1. <br>

**Complexity analysis :**

Time complexity : O(n). Both i and n traverse at most nn steps. In this approach, <br>
the number of assignment operations is equal to the number of elements to remove. So it is more efficient if elements to remove are rare.<br>

Space complexity : O(1).<br>