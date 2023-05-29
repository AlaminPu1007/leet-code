## 152. Maximum Product Subarray

This problem is involved about, Given an integer array nums, find a subarray that has the largest product, and return the product.

# Problem Description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/maximum-product-subarray/description/).

**Approach :**<br/>
we will be traversing the array from both sides i.e left to right ( lets say the max prod is maxi1 ) and from right to left ( say max prod is maxi2 ), now the final answer will we max of maxi1 and maxi2. <br/>

Why do we have a need to traverse from right to left ?? <br/>
Ans : lets take an example <br/>
`arr {-8,5,3,1,6}` <br/>

The whole concept lies in this statement - As we can see that there is only 1 negative no. ( if we consider that no. then the final answer can never be positive ), therefore to avoid this situation we also traverse from right to left to get the final maximum product.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n) = O(n)` - We are using two loop, first loop running till array length in forward way and the second is backward way.
-   Space-Complexity: `O(1)` - we are not using any extra space

```
The given code has a space complexity of O(1) because it does not use any additional data structures that grow with the input size.

In the code, the variable len is used to store the size of the input vector nums, but this does not contribute to the space complexity as it is a constant-sized variable.

The variables res and product are used to keep track of the maximum product and the current product, respectively. These variables are updated during the traversal of the input vector but do not scale with the input size. Therefore, they occupy constant space.

Overall, the code only uses a constant amount of additional space, regardless of the size of the input vector. Hence, the space complexity is O(1).
```
