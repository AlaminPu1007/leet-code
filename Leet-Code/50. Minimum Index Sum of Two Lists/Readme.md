# 599. Minimum Index Sum of Two Lists

Problem link: https://leetcode.com/problems/minimum-index-sum-of-two-lists/

**Problem :**<br>
Suppose Andy and Doris want to choose a restaurant for dinner, and they both have a list of favorite restaurants represented by strings.br>

You need to help them find out their common interest with the least list index sum. If there is a choice tie between answers, output all of them with no order requirement. You could assume there always exists an answer.br>

**Approach :**<br>

we have to set each string index, using hash-map table<br>

```
for i = 0 to len1-1
    Map[list1[i]] := i;
```

Then, loop through next array of string, and to check each string is already present in out has-table or not<br>
If it's present then summation present string index and previous string index, if it's small to the min value<br>
update min value with this summation and clear our previous all string and push current string inside another new array.<br>

else summation of index is equal to min value, then put it to the new array one by one and so on<br>

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
