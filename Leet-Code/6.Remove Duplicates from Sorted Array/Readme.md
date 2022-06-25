# 26. Remove Duplicates from Sorted Array
https://leetcode.com/problems/remove-duplicates-from-sorted-array/

**Problem :**
Given an integer array nums sorted in non-decreasing order, <br>
remove the duplicates in-place such that each unique element appears only once. <br>
The relative order of the elements should be kept the same.<br>

**Solution :**

From below this code, put each unique value, at ascending order. whenever we get an duplicate value<br>
we have to just avoid it and increament j++.If we get any unique value, we have to put it at count position value<br>



	for (i = 0; i < n; i++)
        {
            if (nums[i] != nums[i + 1])
            {

                nums[++count] = nums[i + 1];
            }
        }
count = 0, thats why, addition with 1.<br>

 return count + 1;
    