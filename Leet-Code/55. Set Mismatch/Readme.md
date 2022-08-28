# 645. Set Mismatch

Problem link: https://leetcode.com/problems/set-mismatch/

**Problem :**<br>
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.<br>

You are given an integer array nums representing the data status of this set after the error.<br>

Find the number that occurs twice and the number that is missing and return them in the form of an array.<br>

**Approach :**<br>

```
for i := 0 to n - 1
    auto item = Map.find(nums[i])
         if item != Map.end()
            result.push(nums[i])

          else
           sum += nums[i]
            Map[nums[i]]++

return  (len * (len + 1) / 2) - sum
```

**Complexity :**<br>
Time-Complexity :O(n)<br>
Space-Complexity :O(n)<br>
