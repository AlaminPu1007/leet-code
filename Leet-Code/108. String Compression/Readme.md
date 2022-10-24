## 443. String Compression

[Problem-link](https://leetcode.com/problems/string-compression/)

**Approach :**<br>

Loop through for i:=0 to arr_len-1<br>
Then loop through again until character is not going to be unique.<br>

```
     while(i < len-1 && chars[i] == chars[i+1])
    {
        count++
        i++
    }
```

Now, add char it's correct position

```
chars[index++] := chars[i]
```

FOR ADDING THE COUNT OF EACH CHARACTER AT IT'S CORRECT POSITION

```
    if(count != 1)
    {
        for(auto item: to_string(count))
            chars[index++] = item;
    }
```

return i

**Complexity :**<br>

- Time-Complexity: `O(n)`
- Space-Complexity: `O(1)`
