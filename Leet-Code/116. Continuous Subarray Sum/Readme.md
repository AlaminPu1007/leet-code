## 523. Continuous Subarray Sum

[Problem link](https://leetcode.com/problems/continuous-subarray-sum/)

**Problem description:**
Given an integer array `nums` and an integer `k`, return true if `nums` has a continuous subarray of size at least two whose elements sum up to a multiple of `k`, or `false` otherwise.<br>

An integer x is a multiple of k if there exists an integer n such that `x = n * k`. 0 is always a multiple of k.<br>

**Approach :**<br>
We need a subarray say from i to j such that sum of all elements is divisible by k.<br>

sum_j means prefix sum from 0 to j.<br>

Sum_i means prefix sum from 0 to i.<br>

```
 => (sum_j - sum_i) % k = 0
 => sum_j % k - sum % k = 0
 => sum_j % k = sum_i % k
```

Thus for some prefix_sum(0,j) , we need to check if there exist some prefix_sum(0,i) such that both are equal.<br>

If yes then return true.<br>
Otherwise check for some other j<br>
Lets do a dry run on first example:<br>

`Given, nums : 23 2 4 6 7 , k = 6`<br>

Prefix_Sum at every iteration from 0->i :<br>

```
  i = 0  , prefixSum = 23%6 = 5       | map[5] = 0 (new entry)
  i = 1 , prefixSum = (5+2)%6 = 1     | map[1] = 1 (new entry)
  i = 2 , prefixSum = (1+4)%6 = 5     | map[5] (already exist) !! -> Possible answer
Also, i - map[5] = 2 > 1 ... therefore atleast 2 elements condition is also satisfied
```

**Complexity :**<br>

- Time-Complexity: `O(n)`
- Space-Complexity: `O(n)`

**References :**<br>
[Visit](https://leetcode.com/problems/continuous-subarray-sum/discuss/2744844/C%2B%2B-oror-Explanation-oror-Beginner-oror-Continuos-Subarray-Sum)