# 1385. Find the Distance Value Between Two Arrays

Problem link: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

**Problem :**<br>
Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.<br>

The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.<br>

**Approach-1 :**<br>
To solving this problem, we need to used brute force method.The idea behind of it, whenever we get true response we have to just decrement first array size value by 1 and need to stop inner loop by using break key-work and so no<br>

**Complexity :**<br>
-First Approach
Time-Complexity: O(n^2)<br>
Space-Complexity: O(1)<br>
