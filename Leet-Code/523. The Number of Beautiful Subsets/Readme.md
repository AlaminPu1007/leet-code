## 2597. The Number of Beautiful Subsets

This problem involved about, you are given an array nums of positive integers and a positive integer k.<br/>

A subset of `nums` is beautiful if it does not contain two integers with an absolute difference equal to k.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/the-number-of-beautiful-subsets/description/)

**Approach :**<br/>

1. Sort the array duu to, what if we know that before the current `index i`, there were no larger elements in the array? Then we only need to check for the existence of `nums[i] - k`. We don't even need to check for `nums[i] + k` because any element larger than` nums[i]` would not have been processed yet due to the sorted order. Therefore, we sort the array before starting the recursion.

2. We called a `dfs (recursion)` method

   - initialized a base case that only call for a valid `sub-sets`, and updated counter by `1`
   - To pick an element my ensuring `Map[nums[i] - k]` has exactly `0` frequency, then add current item into the map, after successfully completed `recursive` called, need to removed item from map.
   - After `if` statement we made a recursive call to not pick not element.

3. Return the `count` as a result

**Complexity Analysis :**<br/>

- Time-Complexity: `O( 2^n + n * log(n) )` - The dfs explores all possible subsets of the array. Sorting the array can have `O(n*log(n))` time complexity.

- Space-Complexity: `O(n)` - For DFS and sorting have required extra spaces.