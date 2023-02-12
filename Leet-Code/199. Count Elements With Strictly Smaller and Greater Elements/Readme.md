## 2148. Count Elements With Strictly Smaller and Greater Elements

[Visit Problem](https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/)

**Approach-1 :**<br>

-   Find the max and min element of array, store in M and m variables
-   Compare each element with Min and Max and count while iterating through array in `O(N)` time
-   return the count as `res`.

**Approach-2 :**<br>

-   Find the max and min element of array, store in m and l variables
-   In the same loop use an unordered map to store the frequency of each element
-   return the value of `nums.size()-map[m]-map[l]` as result.

**Complexity Analysis :**<br>

<h4>Approach-1 :</h4>
- Time-Complexity: `O(n)`
- Space-Complexity: `O(1)`

<h4>Approach-2 :</h4>
- Time-Complexity: `O(n)`
- Space-Complexity: `O(n)`
