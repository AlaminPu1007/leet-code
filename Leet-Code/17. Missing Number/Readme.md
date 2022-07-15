# 268. Missing Number

Problem Link: https://leetcode.com/problems/missing-number/

**Problem :**<br>
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.<br>

**Approach :** <br>
First we need to count Total sum of N. (N is from array length).<br>
Then, we need to count sum of array element and return (N_sum - Array_element_sum)<br>

N_sum := (Array_len \* (Array_len + 1)) / 2 <br>

for i = 0 to Array_len <br>
Array_element_sum += nums[i] <br>

return N_sum - Array_element_sum <br>

**Complexity :**<br>
T.C : O(n)
S.C : O(1)
