# 2006. Count Number of Pairs With Absolute Difference K

Problem link: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

**Problem link:**<br>
Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.<br>

**Approach :**<br>

- sort the array of element
- loop through util len
- if element[i] - k, is found then count += Map[nums[i] - k] -> position element
- Always push every element with count their frequency, inside Hash-map Map[nums[i]]++;
- return count

**Complexity:**<br>
// sorting element<br>
Time-Complexity: O(n log(n))<br>
// we are using an extra Map<br>
Space-Complexity: O(n)<br>
