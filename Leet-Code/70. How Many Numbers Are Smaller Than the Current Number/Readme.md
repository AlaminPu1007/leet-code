# 1365. How Many Numbers Are Smaller Than the Current Number

Problem link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

**Problem :**<br>
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].<br>

Return the answer in an array.<br>

**Approach :**<br>

- make copy of existing array and sort them
- declare hash-map and make it's first element is 0
- loop through array length, and give every unique element a value by i
- finally loop through original array, and push Map[arr[i]] into vector, so on.
- return vector array

**Complexity :**<br>
Time-Complexity: O(n.log(n))//for sorting array<br>
Space-Complexity: O(n)<br>
