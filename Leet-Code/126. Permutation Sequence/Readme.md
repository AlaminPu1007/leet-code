## 60. Permutation Sequence

[Open problem](https://leetcode.com/problems/permutation-sequence/)

**Approach :**<br>
[Learn from there](https://takeuforward.org/data-structure/find-k-th-permutation-sequence/)

**Complexity analysis:**<br>

- Time Complexity: `O(N) * O(N) = O(N^2)`

Reason: We are placing N numbers in N positions. This will take O(N) time. For every number, we are reducing the search space by removing the element already placed in the previous step. This takes another O(N) time.<br>

- Space Complexity: `O(N)`

Reason: We are storing the numbers in a data structure(here vector)<br>
