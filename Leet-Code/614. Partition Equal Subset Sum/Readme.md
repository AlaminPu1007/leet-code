## 416. Partition Equal Subset Sum

This problem involved about, given an integer array `nums`, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/partition-equal-subset-sum/description/)

**Approach for Top down approach (Tabulation approach):**<br/>

1. **Calculate Total Sum**:

   - Compute the total sum of all elements in the `nums` array.
   - If the total sum is odd, return `false` as it's not possible to partition an odd sum into two equal integer parts.

2. **Determine Target Sum**:

   - Calculate the target sum, which is half of the total sum (`targetSum = sum / 2`).

3. **Initialize DP Array**:

   - Create a 2D boolean array `dp` with dimensions `(n + 1) x (targetSum + 1)` where `n` is the size of `nums`.
   - Initialize the first column (`dp[i][0]`) to `true`, since a target sum of `0` is always achievable with any subset (by including no elements).
   - Initialize the first row (`dp[0][j]`) to `false` for all `j > 0`, since a non-zero target sum is not achievable with zero elements.

4. **Fill DP Array**:

   - Iterate through the elements of `nums` and possible target sums to fill the `dp` array.
   - For each element in `nums`, update the `dp` array to reflect whether the current target sum `j` can be achieved:
     - If the current element (`nums[i-1]`) is less than or equal to the target sum `j`, update `dp[i][j]` by considering two cases:
       1. Exclude the current element: `dp[i-1][j]`
       2. Include the current element: `dp[i-1][j-nums[i-1]]`
     - If the current element is greater than the target sum, copy the value from the previous row: `dp[i][j] = dp[i-1][j]`

5. **Return Result**:
   - Return the value in `dp[n][targetSum]`, which indicates whether the target sum can be achieved with the given elements in `nums`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * m)` - The algorithm iterates through each element and each possible target sum, resulting in a time complexity of `O(n * m)` where `n` is the number of elements in `nums` and `targetSum` is half of the total sum.

- Space-Complexity: `O(n * m)` - The space complexity is `O(n * m)` due to the use of the 2D DP array `dp`.