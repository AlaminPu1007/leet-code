# 2176. Count Equal and Divisible Pairs in an Array

problem link: https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/

**Approach :**<br>
we need an hash-map to solve this problem. first we have to check each element of array is already stored in our Map or not.<br>
If element is already is not present.<br>

```
for i = 0 to len - 1
    auto item = Map.find(nums[i])
    // it item is not found, store inside hash map
            if (item == Map.end())
                Map[nums[i]].push_back(i);

            // else logic goes here
           ....
        }
```

It its present<br>

```
 else
    // Now we can simply iterate over indices of each element stored in vector mapped
    // according to first occurence of each element accordingly stored in our Map

     for (auto j : Map[nums[i]])
         if ((i * j) % k == 0)
             count++

```

finally return count<br>

**Complexity-Analysis:**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
