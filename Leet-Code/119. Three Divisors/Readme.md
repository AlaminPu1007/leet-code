## 1952. Three Divisors
[Got to the problem](https://leetcode.com/problems/three-divisors/)

**Problem Description:**<br>
Given an integer `n`, `return true` if n has exactly three positive divisors. Otherwise, `return false`.

An integer `m` is a divisor of `n` if there exists an integer k such that `n = k * m`.

**Approach :**<br>
We have to check the value `n` is divided by `1 to n` and increment `counter` value by one, after each iteration is true.<br>
if counter is equal to 3 then return true, other wise return false

**Complexity :**<br>
- Time-Complexity: `O(n)`
- Space-Complexity: `O(1)`