## 290. Word Pattern

This problem involved about, given a pattern and a string s, find if s follows the same pattern.

# Problem description

For better problem description, please visit [Leetcode page](https://leetcode.com/problems/word-pattern/description/)

**Approach :**<br/>

-   we will have required two hash-map to keep track of word with character
-   first map will hold char as a key and word as a value
-   and the second one has opposite order
-   then loop through on `pattern` and check `Map[pattern[i]] == word` && `Map2[word] == patten[i]`

**Complexity :**<br/>

-   Time-Complexity: `O(n)` - for counting word from given string, can have `O(n)` times, as well as iterate over the pattern and check their pattern into hash-map also has `O(n)` times
-   Space-Complexity: `O(n)` - since we are using an additional extra spaces for storing key-value paris(hash-map)
