## 3075. Maximize Happiness of Selected Children
This problem involved about, you are given an array happiness of length n, and a positive integer k.<br/>

There are n children standing in a queue, where the ith child has happiness value happiness[i]. You want to select k children from these n children in k turns.

# Problem  description
For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximize-happiness-of-selected-children/description/)

**Approach :**<br/>

1. Sort the `happiness` array in non-increasing order to maximize happiness.
2. Initialize a variable `res` to store the maximum happiness sum.
3. Iterate over the first `k` elements of the sorted array.
   - For each element, calculate the difference between the happiness value and its position in the sorted array.
   - Add the maximum of this difference and 0 to the `res`.
4. Return the maximum happiness sum.


**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * log(n))` - Sorting the array takes `O(N log N)` time.
- Space-Complexity: `O(n * log(n))` - Additional space for sorting the `happiness` array.