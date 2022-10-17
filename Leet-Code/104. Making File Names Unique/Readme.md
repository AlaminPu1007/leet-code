## 1487. Making File Names Unique

[problem link](https://leetcode.com/problems/making-file-names-unique/)

**Approach :**<br>
Loop through array of string,<br>
`for i := 0 to len-1`<br>
for each iteration find the string is already present in our has map<br>

```
auto item = Map.find(names[i])
if item != Map.end()
```

if item is present, then copy its value inside new variable, and again find the string contains brackets, it's present or not<br>
if it's present then increment it's value by 1,and also increment `Map[names[i]]` by 1,so on<br>

Recently we will use one more number so increment <br>

```
  Map[names[i]]++;
```

update root names value <br>

```
  names[i] = names[i]+"("+to_string(k)+")";
```

if any of then is not true, then push new string value inside Hash-Map

```
Map[names[i]] = 1;
```

**Complexity :**<br>
//unordered_map to find a string it will take only O(1) time.... But for map it will take O(logn) time<br>

- Time-Complexity : `O(n)`
- Space-Complexity: `O(n)` //we are using a extra hash-map
