# 377. Combination Sum IV

Problem link: https://leetcode.com/problems/combination-sum-iv/

**Problem :**<br>
Given an array of distinct integers nums and a target integer target, return the number of possible combinations that add up to target.

The test cases are generated so that the answer can fit in a 32-bit integer.<br>

**Approach :**<br>

- initialize dp[0] = 1
- loop through i to target
- loop through j to array(original array)
- push dp[i] += dp[i - array[j]], and so on
- return dp[target]

**Complexity :**<br>
Time-Complexity: O(n.m)//n = target, m = arr.size()<br>
Space-Complexity: O(n) // we are using extra dp array
