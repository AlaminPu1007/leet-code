# 349. Intersection of Two Arrays

Problem link: https://leetcode.com/problems/intersection-of-two-arrays/

**Problem :**<br>
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.<br>

**Approach :**<br>
To solve this problem, we need Hash map. For first array, we making an key value pairs with value 1.<br>
Then, loop through second array, and each for each iteration we need to check, this value is already present in our Hash map or not.<br>
If it is true, then we have to update its value with 2, and so on.<br>
Finally, check hash map value pairs which is equal to 2, and push it inside our new vector array.<br>

# Runtime: 4 ms, faster than 88.83%
