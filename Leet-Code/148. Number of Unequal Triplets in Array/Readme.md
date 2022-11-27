## 2475. Number of Unequal Triplets in Array

[Open problem](https://leetcode.com/problems/number-of-unequal-triplets-in-array/)

**Approach :**<br>
First, we count numbers using a hash map m.<br>

For numbers` a, b and c, we can form m[a] * m[b] * m[c]` unique triplets.<br>

Say we have `26` numbers `(a...z)`. Number n forms these number of triplets: <br>

-   `m[a] * m[n] * m[o] + ... + m[a] * m[n] * m[z] +`
-   `m[b] * m[n] * m[o] + ... + m[b] * m[n] * m[z] +`
-   `...`
-   `m[m] * m[n] * m[o] + ... + m[m] * m[n] * m[z]`

This formula can be simplified as `sum(m[a]...m[m]) * m[n] * sum(m[o]...m[z])`.<br>

We can track sum on the left and right of `m[n]` as we go.<br>

```
What about 0 <= i < j < k condition? Actually, the relation does not matter.
What matters is that [i, j, k], [i, k, j], [k, i, j] and [k, j, i] represent the same triplet, so it should only be counted once.
```

**Complexity Analysis:**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
