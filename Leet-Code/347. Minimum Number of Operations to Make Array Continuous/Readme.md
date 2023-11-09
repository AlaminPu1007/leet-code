## 2009. Minimum Number of Operations to Make Array Continuous

This problem involved about, You are given an integer array nums. In one operation, you can replace any element in nums with any integer.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/description/)

**Approach :**<br/>

-   Create a map Map to store the frequency of each element in nums. This step takes O(N) time and O(N) space, where N is the length of the nums vector.
-   Create a temporary vector temp to store the unique elements from the map. This step takes O(N) time and O(N) space.
-   Initialize res to the length of nums (as this is the worst-case scenario) and r to 0.
-   Iterate through the unique elements in temp:
    1. For each unique element temp[l], find the maximum subarray length window such that the elements in this subarray can be removed to make the element unique. This is done by incrementing r until temp[r] becomes greater than or equal to temp[l] + len. The difference r - l represents the size of the subarray.
    2. Update res to the minimum between the current res and len - window.
-   Return res as the minimum number of operations required.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(n))` - due to the sorting step involved in creating the temp vector
-   Space-Complexity: `O(n)` - using an additional memory
