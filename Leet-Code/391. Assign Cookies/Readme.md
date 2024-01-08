## 455. Assign Cookies

This problem involved about, assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie. <br/>

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/assign-cookies/description/)

**Approach :**<br/>

1. Sort arrays g and s in ascending order.
2. Initialize variable contentChildren = 0 to represent the number of children who receive cookies that meet their greed.
3. Initialize variable cookieIndex = 0 to represent the number of cookies that have been assigned or skipped.
4. while cookieIndex is less than the size of s and contentChildren is less than the size of g:
    - If the current cookie's size is greater than or equal to the current child's greed:
    - Increment contentChildren to allocate the cookie.
    - Increment cookieIndex to move on to the next cookie.
5. Return contentChildren.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n) + O(m * log(m)))`
-   Space-Complexity: `O(n)`
