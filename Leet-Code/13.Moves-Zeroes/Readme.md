# 283. Move Zeroes

https://leetcode.com/problems/move-zeroes/

**Problem**
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.<br>

Note that you must do this in-place without making a copy of the array.<br>

**Approach**
First push non zeros of element in existing array, and count how many zeros are there.<br>
Then, push the number of zero, in existing array, of last position.<br>
