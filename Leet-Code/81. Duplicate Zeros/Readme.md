# 1089. Duplicate Zeros

Problem link: https://leetcode.com/problems/duplicate-zeros/

**Problem :**<br>
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.<br>

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.<br>

**Approach :**<br>

- loop thorough original array
- whenever get any element is 0, run another nested loop , from reverse order till i and push each item inside existing array, so on

**Complexity :**<br>
Time-Complexity: O(n.m)<br> // where, n = arr.size(), and m = arr.size() - i
Space-Complexity: O(1)<br>
