# 50. Pow(x, n)

Problem link: https://leetcode.com/problems/powx-n/

**Problem :**<br>
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).<br>

**Approach 1:**<br>

- return x \* pow(x, (double(n) - 1))

**Complexity :**<br>
Both Time ans space complexity :O(1)<br>

**Approach -2(Recursion):**<br>

- if n % 2 == 0 return (ans times ans)

```
if(n % 2 == 0)
    ans := Solve(x, n/2)
    return ans * ans

```

else return (ans times ans times x)

```
    ans := Solve(x, n/2)
    return ans  ans  x
```
