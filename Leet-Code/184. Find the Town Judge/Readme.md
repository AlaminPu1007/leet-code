## 997. Find the Town Judge

[Visit problem](https://leetcode.com/problems/find-the-town-judge/description/)

**Approach :**<br>

-   I have created two vectors `trusting` which represents `ith` element trusts how many people and `trusted` whose ith element represents it is trusted by how many people.
-   I have incremented respective indexes in each iteration.
-   Finally I have initialized `ans = -1`, if there exist any i which trusts nobody i.e. `trusting[i] = 0` && it is trusted by all accept him i.e.` trusted[i] = n-1` then update `ans`.
-   return `ans`

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
