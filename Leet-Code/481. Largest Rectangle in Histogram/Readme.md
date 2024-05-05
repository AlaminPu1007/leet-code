## 84. Largest Rectangle in Histogram

This problem involved about, given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/largest-rectangle-in-histogram/description/)

**Approach (Two left array approach (left, right boundary)) :**<br/>

1. Initialize an empty stack to store the indices of the histogram bars.
2. Create two arrays, `leftBoundary` and `rightBoundary`, to store the left and right boundary indices for each bar.
3. Iterate through the histogram from left to right to calculate the left boundary for each bar:
    - While the stack is not empty and the height of the bar at the top of the stack is greater than or equal to the current bar's height, pop elements from the stack.
    - If the stack becomes empty, set the left boundary index for the current bar as 0, otherwise set it as the index of the bar at the top of the stack plus one.
    - Push the current bar's index onto the stack.
4. Clear the stack.
5. Iterate through the histogram from right to left to calculate the right boundary for each bar using a similar approach as step 3.
6. Iterate through the histogram again and calculate the area of the largest rectangle:
    - For each bar, calculate the area by multiplying its height by the difference between its right and left boundary indices plus one.
    - Update the maximum area if the calculated area is greater.
7. Return the maximum area.

**Complexity Analysis (Two left array approach (left, right boundary)) :**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the histogram twice and performs constant-time operations in each iteration, resulting in a time complexity of `O(n)`.

-   Space-Complexity: `O(n)` - The algorithm uses two arrays of size `n` to store the left and right boundaries, resulting in a space complexity of `O(n)`.

**Approach (Optimal Solution) :**<br/>

1. Initialize an empty stack to store the indices of the histogram bars.
2. Iterate through the histogram array and append an extra element with height 0 to the end of the array (to handle the case when all bars have been processed).
3. For each bar in the histogram:
    - While the stack is not empty and the height of the current bar is less than or equal to the height of the bar at the top of the stack:
        - Pop the top element from the stack and calculate the area of the rectangle formed by the popped bar as the height and the width.
        - Update the maximum area if the calculated area is greater than the current maximum area.
    - Push the index of the current bar onto the stack.
4. Return the maximum area.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the histogram array once and performs constant-time operations in each iteration, resulting in a time complexity of `O(n)`.

-   Space-Complexity: `O(n)` - The algorithm uses a stack to store the indices of the bars, resulting in a space complexity of `O(n)`.
