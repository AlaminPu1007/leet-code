## Two-Sum

[Visit Problem](https://leetcode.com/problems/two-sum/)

**Problem :**<br>
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target<br>

**solution :**<br>

-   sample-input: `arr=[3,2,4], target = 6`

-   sample-output: `[1, 2]`

we have two approach to solve this issue, the first solution will be take O(n^2) time complexity.<br>
and another one will be take `O(n`)<br>

`i` would like to go with second one.<br>

for this approach we need c++ map library to take an advantages from hash map, to storing value with key, value pairs.<br>

```
for(i = 0; i < n; i++)
{
sum = target - num[i];

          if(Objects.find(sum) != Objects.end())
          {
              auto item = Objects.find(sum);
              arr.push_back(item->second);
              arr.push_back(i);
          }

          Objects.insert(make_pair(num[i], i));
      }
```

-   let discuss about this few line of code: :)<br>

`sum = target - num[i]` --> from this line we always subtract `num[i]` form our target value.<br>

`Objects.insert(make_pair(num[i], i))` --> from this one, we always insert, `key = num[i]`, value = i(from loop).<br>

```
    if(Objects.find(sum) != Objects.end())
          {
              auto item = Objects.find(sum);
              arr.push_back(item->second);
              arr.push_back(i);
          }
```

we will get actual output from this if condition.After inserting each `num[i]` item inside `map(Objects)`, <br>
we always check the sub-track value from "sum" is already inside our `map(Objects)` present or not.<br>

if its present, just push `"Objects.value(from i)"` inside vector arr(dynamic array), and also push current `i`(from loop).<br>

because, this i will be the next desire value index;<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`

# Happy coding
