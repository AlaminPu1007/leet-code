## 1208. Get Equal Substrings Within Budget

This problem involved about, you are given two strings s and t of the same length and an integer maxCost.<br/>

You want to change s to t. Changing the ith character of s to ith character of t costs |s[i] - t[i]| (i.e., the absolute difference between the ASCII values of the characters).<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/get-equal-substrings-within-budget/description/)

**Approach :**<br/>

1. **Initialize Variables**:

   - `n` to store the size of the string.
   - `left` to track the start of the current window.
   - `res` to store the result (maximum length of the valid substring).
   - `totalCost` to keep track of the current window's cost.

2. **Iterate Through the String**:

   - Loop through each character of the strings `s` and `t`.
   - Calculate the cost for transforming the current character of `s` to the corresponding character of `t` and add it to `totalCost`.

3. **Adjust Window**:

   - If `totalCost` exceeds `maxCost`, shrink the window from the left by subtracting the cost of transforming the leftmost character and moving the `left` pointer one step to the right.

4. **Update Result**:

   - For each valid window, update `res` with the maximum length of the window.

5. **Return Result**:
   - Return `res` which holds the maximum length of the substring that can be transformed within the given `maxCost`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - The time complexity is `O(n)` because each character is processed at most twice (once when expanding the window and once when shrinking it).

- Space-Complexity: `O(1)` - The space complexity is `O(1)` as only a few integer variables are used and no additional space is required that scales with the input size.
