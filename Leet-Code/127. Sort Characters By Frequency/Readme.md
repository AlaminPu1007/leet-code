## 451. Sort Characters By Frequency
[Open problem](https://leetcode.com/problems/sort-characters-by-frequency/)

**Approach :**<br>
- make an key-value pairs by using hash-map
- loop through hash-map and copy it's items inside vector<pair> array.
- loop through vector_pairs array, 
```
 while(item.first--)
    {
        ans += item.second;
    }
}
```
- `return ans`

**Complexity Analysis :**<br>
- Time-Complexity: `O(n * m)` // sorting will take `O(n*log(n))`
[about space-complexity](https://stackoverflow.com/questions/56134826/space-complexity-of-an-array-of-pairs)
- Space-Complexity: `O(n)` 