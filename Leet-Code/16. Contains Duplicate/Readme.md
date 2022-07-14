# 217. Contains Duplicate

https://leetcode.com/problems/contains-duplicate/

**Problem :**<br>
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.<br>

**Solution :**<br>
To solve this problem, Fist we need to count each element frequency with key value pairs.<br>

for i = 0 to nums.size()<br>
Map[nums[i]]++ <br>

Then, check if any element frequency is more than 1 or not.

for auto item : Map <br>
if item.second > 1 <br>
return true <br>

return false <br>
