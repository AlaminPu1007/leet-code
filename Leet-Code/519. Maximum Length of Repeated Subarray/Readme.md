## 718. Maximum Length of Repeated Subarray

This problem involved about, given two integer arrays nums1 and nums2, return the maximum length of a subarray that appears in both arrays.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-length-of-repeated-subarray/description/)

### Recursive solution

**Approach :**<br/>

1. **Initialization**:

   - Initialize a variable `ans` to store the maximum length of the common subarray.

2. **Recursive Function**:
   - Define a recursive function `DFS` that takes the following parameters:
     - `n`: The length of `nums1`.
     - `nums1`: The first array.
     - `m`: The length of `nums2`.
     - `nums2`: The second array.
     - `i`: The current index in `nums1`.
     - `j`: The current index in `nums2`.
   - In the recursive function:
     - If either `n == i` or `m == j`, return 0 (base case).
     - Initialize a variable `count` to 0.
     - If `nums1[i] == nums2[j]`, increment `count` by 1 and recursively call `DFS` with incremented indices `i+1` and `j+1`.
     - Update `ans` with the maximum of `ans` and `count`.
     - Recursively call `DFS` with incremented index `i+1` and index `j`.
     - Recursively call `DFS` with index `i` and incremented index `j+1`.
     - Return `count`.
3. **Main Function**:
   - In the `main` function:
     - Create an instance of the `Solution` class.
     - Initialize two vectors `nums1` and `nums2` with the given values.
     - Call the `findLength` method of the `Solution` class with `nums1` and `nums2` as arguments and print the result.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(2 ^ n)` - The time complexity is `O(2^n)` in the worst case because each character comparison can lead to two recursive calls. However, this is highly inefficient and can be optimized using dynamic programming.

- Space-Complexity: `O(n + m)`- The space complexity is O(n + m) due to the recursion stack.

<br/>
<br/>

### Recursive + Memoization

**Approach :**<br/>

1. **Initialization**:
   - Initialize a variable `ans` to store the maximum length of the common `subarray`.
   - Initialize a 2D memoization array `dp` of size `(n + 1) x (m + 1)` with all elements set to -1.
2. **Recursive Function**:
   - Define a recursive function `DFS` that takes the following parameters:
     - `n`: The length of `nums1`.
     - `nums1`: The first array.
     - `m`: The length of `nums2`.
     - `nums2`: The second array.
     - `i`: The current index in `nums1`.
     - `j`: The current index in `nums2`.
     - `dp`: The memoization array.
   - In the recursive function:
     - If either `n == i` or `m == j`, return 0 (base case).
     - If `dp[i][j]` is not -1, return `dp[i][j]`.
     - Initialize a variable `count` to 0.
     - If `nums1[i] == nums2[j]`, increment `count` by 1 and recursively call `DFS` with incremented indices `i+1` and `j+1`.
     - Update `ans` with the maximum of `ans` and `count`.
     - Recursively call `DFS` with incremented index `i+1` and index `j`.
     - Recursively call `DFS` with index `i` and incremented index `j+1`.
     - Set `dp[i][j]` to `count`.
     - Return `count`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n*m)`- The time complexity of the dynamic programming solution is `O(n * m)`, where n is the length of `nums1` and m is the length of `nums2`.

- Space-Complexity: `O(n*m)`- The space complexity of the dynamic programming solution is `O(n * m)` for the memoization array `dp`.

<br/>
<br/>

### Bottom up or Tabulation

**Approach :**<br/>

1. **Initialization**:

   - Initialize a variable `res` to store the maximum length of the common subarray.
   - Initialize a 2D array `dp` of size `(n + 1) x (m + 1)` with all elements initialized to 0.

2. **Iterative Filling**:

   - Iterate over each index `(i, j)` of `dp` starting from `(1, 1)`:
     - If `nums1[i - 1]` is equal to `nums2[j - 1]`, update `dp[i][j]` to `1 + dp[i - 1][j - 1]`.
     - Update `res` with the maximum of `res` and `dp[i][j]`.
     - If `nums1[i - 1]` is not equal to `nums2[j - 1]`, set `dp[i][j]` to 0.

3. **Return Result**:
   - After iterating over all elements, return `res` as the final answer.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n*m)`- The time complexity of this algorithm is `O(n * m)`, where n is the length of `nums1` and m is the length of `nums2`.

- Space-Complexity: `O(n*m)`- The space complexity is `O(n * m)` for the memoization array `dp`.