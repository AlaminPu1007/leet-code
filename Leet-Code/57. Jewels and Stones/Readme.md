# 771. Jewels and Stones

Problem link: https://leetcode.com/problems/jewels-and-stones/

**Problem :**<br>
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.<br>

Letters are case sensitive, so "a" is considered a different type of stone from "A".<br>

**Approach :**<br>

```
for i := 0; to len1-1
     Map[stones[i]]++

for i := 0 to len-1
   count += Map[jewels[i]]

return count;
```

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
