# 169. Majority Element

https://leetcode.com/problems/majority-element/

**Problem :** <br>
Given an array nums of size n, return the majority element.<br>

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element <br>always exists in the array.<br>

**Solution :** <br>

The majority element is an element in an array that occurs more than (size/2) times in an array <br>
(where size​ is the number of elements stored in an array).<br>

I had solved this problem with two approach, one is using Hash map, which space complexity is O(N), and another one is for Space Complexity O(1).<br>

**First Approach :**

First Approach is that, Count each element Frequency, by using Hash map to making of key value pairs. <br>
Then find which map value is grater than (size / 2) and return Map pairs(item.first).<br>

**Complexity :** <br>

T.C -> O(N)<br>
S.C -> O(N)<br>

**Second Approach Boyer-moore-majority-voting-algorithm :** <br>

Learn more about : https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/

Second Approach is that, store array first element inside a variable.<br>
count : += (nums[i] == copyNum) ? 1 : -1 <br>

then return copyNum <br>

**Complexity :** <br>

T.C -> O(N)<br>
S.C -> O(1)<br>
