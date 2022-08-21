# 347. Top K Frequent Elements

Problem link: https://leetcode.com/problems/top-k-frequent-elements/

**Problem :**<br>
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.<br>

**Approach :**<br>

```
for  i = 0 to len - 1
    Map[nums[i]]++;

 for auto item : Map
    pq.push(make_pair(item.second, item.first))

  while (k--)
     result.push_back(pq.top().second)
      pq.pop()

   return result;
```

**Complexity :**<br>

Time complexity : O(n log(n))<br>

Space complexity : O(n + k)<br>
