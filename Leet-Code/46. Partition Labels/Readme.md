# 763. Partition Labels

Problem link: https://leetcode.com/problems/partition-labels/

**Problem :**<br>
You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.<br>

Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.<br>

Return a list of integers representing the size of these parts.<br>

**Approach :**<br>

- First make an key value pairs of each character with their position
- Then loop through again,

```
for i = 0 to len - 1
   if i > end
       result.push_back(end - start + 1)
         start = i;
         end = Map[s[i]];

   else if Map[s[i]] > end
       end = Map[s[i]];

result.push_back(end - start + 1);

return result;
```

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
