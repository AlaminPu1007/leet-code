# 414. Third Maximum Number

https://leetcode.com/problems/third-maximum-number/

**Problem :**

Given an integer array nums, return the third distinct maximum number in this array. <br>
If the third maximum does not exist, return the maximum number.<br>

**Approach :**
First sort our all array of element with reverse order, Mean larger > sorter.<br>

then, count each unique element, and increment counter. <br>
if (nums[i] < nums[i - 1]) <br>
count++ <br>

if (count == 3) <br>
return nums[i] <br>

else return nums[0] // first element<br>
