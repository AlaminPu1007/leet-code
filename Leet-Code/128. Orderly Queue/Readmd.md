## 899. Orderly Queue

[open problem](https://leetcode.com/problems/orderly-queue/)

**Approach :**<br>

- If k = 1, only rotations of s are possible, and the answer is the lexicographically smallest rotation.

- If k > 1, any permutation of s is possible, and the answer is the letters of s written in lexicographic order.

**Complexity Analysis :**<br>
[get full description of complexity](https://leetcode.com/problems/orderly-queue/solution/)

- Time Complexity: `O(N ^ 2)`, where NN is the length of s.
- Space Complexity: `O(N)`.
