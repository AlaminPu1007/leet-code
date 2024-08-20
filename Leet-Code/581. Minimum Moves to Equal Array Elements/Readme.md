## 453. Minimum Moves to Equal Array Elements

This problem involved about, given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/)

**Approach with dp :**<br/>

1. Initialize a variable `steps` to keep track of the total number of moves needed to make all elements equal.
2. Initialize another variable `minValue` to store the minimum value in the given array `nums`.
3. Traverse through each element in the array to find the minimum value and store it in `minValue`.
4. Traverse through each element in the array again and calculate the difference between each element and `minValue`.
5. Sum up all the differences to obtain the total number of moves required to make all elements in the array equal to the minimum value.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n)`- Finding the minimum value in the array takes linear time `O(n)` as we traverse through each element once.

-   Space-Complexity: `O(1)` - We use only a constant amount of extra space for variables like `steps`, `minValue`, and the iteration variables.
