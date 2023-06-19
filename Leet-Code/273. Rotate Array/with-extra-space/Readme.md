## 189. Rotate Array

This problem is involved about, given an integer array nums, rotate the array to the right by k steps, where k is non-negative

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/rotate-array/description/)

**Algorithm :**<br/>

-   Create a copy of the original array called copyArr by using `vector<int> copyArr(nums.begin(), nums.end())`.
-   Iterate over the elements of the original array using a loop with the variable i ranging from` 0 to nums.size() - 1`
-   Calculate the new position for each element by using the formula `pos = (i + k) % nums.size()`
-   Assign the element at index i of copyArr to the pos index in the original nums array.
-   After completing the loop, the nums array will contain the rotated elements.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity of this algorithm is `O(n)` because we iterate through the array once to perform the rotation operation
-   Space-Complexity: `O(n)` - The space complexity is `O(n)` because we create a copy of the original array to store the rotated elements.
