# 350. Intersection of Two Arrays II

Problem link: https://leetcode.com/problems/intersection-of-two-arrays-ii/

**Problem :**<br>
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.<br>

**Approach :**<br>
-First we have to count first array frequency with Hash-Map

```
for i := 0 to len-1
    Map[nums1[i]]++
```

- No loop through second array, and check each value from Hash-map which is grater than 0, and push it inside new array and decrement it's frequency, and so on

```
       for i := 0 to len2-1

            if Map[nums2[i]] > 0
                result.push_back(nums2[i])
                Map[nums2[i]]--
```

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
