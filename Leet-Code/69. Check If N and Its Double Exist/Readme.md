# 1346. Check If N and Its Double Exist

Problem link: https://leetcode.com/problems/check-if-n-and-its-double-exist/

**Problem :**<br>
Given an array arr of integers, check if there exist two indices i and j such that :

```
i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
```

**Approach - 1:**<br>

- we need an brute-force to solve this issue, we have to just check each element with other all of element except it self

```
for i := 0 to len-1
     for j := i+1 to len-1
         f ((arr[j] == arr[i] * 2) || (arr[i] == arr[j] * 2))
               return true
return false
```

**Approach - 2:**<br>

- push each element inside hash-table
- count number of zero element present inside of original array, if its length greater 1, return true
- loop through hash-map and each item multiply by 2 to check it's already present inside our map or not, it it's just return true
- else return false

**Complexity for Approach - 1 :**<br>
Time-Complexity: O(n^2)<br>
Space-Complexity: O(1)<br><br>

**Complexity for Approach -2 :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
