## 2405. Optimal Partition of String

-   [Visit Problem](https://leetcode.com/problems/optimal-partition-of-string/description/)

**Approach :**<br/>

Intuitively, we can consider adding characters to a substring as long as we don't see a character that has already been added to the current substring. When we see a character that is already present in the substring, we start a new substring and repeat this process until we iterate over the entire string

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
