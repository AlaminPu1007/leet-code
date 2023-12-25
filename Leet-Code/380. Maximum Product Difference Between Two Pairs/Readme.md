## 1913. Maximum Product Difference Between Two Pairs

This problem involved about, the product difference between two pairs `(a, b) and (c, d)` is defined as `(a * b) - (c * d)`. Return the maximum such product difference.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description)

**Approach :**<br/>

-   Sort the `nums` array
-   multiply last two & fist two element of `nums` and get their difference
-   return `res`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting required that much time complexity
-   Space-Complexity:`O(n)` - sorting require extra spaces
