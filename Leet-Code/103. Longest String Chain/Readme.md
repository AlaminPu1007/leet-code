## 1048. Longest String Chain

[problem link](https://leetcode.com/problems/longest-string-chain/)

**Approach :**<br>

- sorting a string vector based on the string size [learn more about it](https://stackoverflow.com/questions/18831470/sorting-a-string-vector-based-on-the-string-size)
- loop thorough each word, and their length

```
    for string word to words.length() - 1
        for i := 0 to word.length()- 1
            //and sub string
            word.substr(0,i) + word.substr(i+1,each_word_len+1)
            //get longest value from Hash map
            longest := max(longest,Map[sub]+1);

            //put each word longest value inside map
            Map[word] = longest;
            //get longest string length
            res = max(res,longest);
```

- finally return `res`

**Complexity :**<br>

- Time-Complexity: `O(n*m)`//if we avoid access substr (predefine library of c++)
- Space-Complexity: `O(n)` // using extra hash-map
