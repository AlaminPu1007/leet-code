## 1759. Count Number of Homogenous Substrings

This problem involved about, given a string s, return the number of homogenous substrings of s. Since the answer may be too large, return it modulo `10^9 + 7`.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-number-of-homogenous-substrings/description)

**Approach :**<br/>

1. Initialize:

    - The answer ans = 0.
    - The count = 0.
    - The modulus MOD = 1^9 + 7

2. Iterate i over the indices of s:
    - If `i == 0 or s[i] == s[i - 1]`, increment count.
    - Otherwise, reset count = 1.
    - Add count to ans.
3. return ans.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - iterate over the array has `O(n)` time complexity
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces
