## 67. Add Binary

[Open problem](https://leetcode.com/problems/add-binary/)

**Approach :**<br>

```
Adding 2 binary bits :
0 + 0 = 0
1 + 0 = 1
0 + 1 = 1
1 + 1 = 10
```

- we get an item from first string and second string and convert them into string and store it inside new-string `(carry % 2) - '0'`
- reverse new string and return it

**Complexity :**<br>

- Time-Complexity:`O(n)`
- Space-Complexity: `O(1)`

- Important point to note: [Reference - here](http://codeforces.com/blog/entry/66660)

```
a = a + "xy" is O(N) while a += "xy" is O(1) (amortized).

a = a + "xy" creates a copy of a, appends "xy" and then assigns it back to a.

a += "xy" just appends "xy" to a.

Therefore the time complexity of this approach is O(n).
```

**References :**<br>
[get the references](<https://leetcode.com/problems/add-binary/discuss/1680021/Very-simple-O(n)-C%2B%2B-solution>)

```

```
