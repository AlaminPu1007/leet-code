## 661. Image Smoother

This problem involved, an image smoother is a filter of the size 3 x 3 that can be applied to each cell of an image by rounding down the average of the cell and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother). If one or more of the surrounding cells of a cell is not present, we do not consider it in the average (i.e., the average of the four cells in the red smoother).

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/image-smoother/description/)

**Approach (Naive solution)**<br/>

1. Initialize variables n and m to represent the number of rows and columns in the input matrix img.
2. Initialize an output matrix res with dimensions n by m and initialize each entry to 0.
3. Iterate through each pixel in the input matrix:
    - Initialize variables sum and count to 0 to accumulate the sum and count of valid neighbors.
    - Iterate over a 3x3 grid centered around the current pixel, including itself:
        1. If the neighbor is within the bounds of the matrix, update sum with its value and increment count.
    - Update the corresponding pixel in the output matrix with the average value: res[row][col] = sum / count.
4. Return the smoothed image matrix res.

**Complexity Analysis of naive approach :**<br/>

-   Time-Complexity: `O(n * m)` - traverse over the matrix has `O(n*m)` time complexity. for each row, col, we count the average that required constant amount of time complexity.

-   Space-Complexity: `O(n*m)` - for resulting average matrix required extra spaces
