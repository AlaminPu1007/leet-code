## 1047. Remove All Adjacent Duplicates In String

[Visit problem](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)

**Approach-1 :**<br>

```
    s = "abbaca"
    ans = a              s[i+1] = b
    ans = ab             s[i+1] = b
    ans = a              s[i+1] = a
    ans = c              s[i+1] = a
    ans = ca

    Finally ans = "ca"
```

**Complexity Analysis of Approach-1 :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
