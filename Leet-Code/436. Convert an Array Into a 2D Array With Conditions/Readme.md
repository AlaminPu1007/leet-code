## 2610. Convert an Array Into a 2D Array With Conditions

This problem involved about, you are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions: <br/>

-   The 2D array should contain only the elements of the array nums.
-   Each row in the 2D array contains distinct integers.
-   The number of rows in the 2D array should be minimal.

Return the resulting array. If there are multiple answers, return any of them.

# Problem description

For better problem description. please visit [LeetCode Pages](https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/)

**Approach :**<br/>

1. Initialization:

    - Initialize an array `freq` to keep track of the frequency of each element in the input array `nums`.
    - Initialize a two-dimensional vector `res` to store the result.

2. Iterate Over Elements:

    - Iterate over each element in the array `nums`.
    - For each element:
        - Check if the frequency of the current element is greater than or equal to the current size of the two-dimensional array `res`.
            - If true, it means a new row needs to be added to the result matrix. So, add a new row to `res`.
        - Insert the current element into the appropriate row based on its frequency.
        - Increment the frequency of the current element.

3. Result:
    - Return the two-dimensional vector `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the size of the input array `nums`.
-   Space-Complexity: `O(n)` - where N is the size of the input array `nums`. The space is used to store the result matrix.
