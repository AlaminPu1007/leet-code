## 2125. Number of Laser Beams in a Bank

This problem involved about, anti-theft security devices are activated inside a bank. You are given a 0-indexed binary string array bank representing the floor plan of the bank, which is an m x n 2D matrix. bank[i] represents the ith row, consisting of '0's and '1's. '0' means the cell is empty, while'1' means the cell has a security device.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/)

**Approach-1 :**<br/>

1. Initialization:

    - Initialize variables `res` and `x` to 0.
    - Initialize an array `noOfOnes` to store the count of ones in each row.

2. Count Ones in Each Row:

    - Iterate over each row of the binary matrix `bank`.
    - For each row:
        - Initialize a variable `count` to 0.
        - Iterate over each character in the row.
        - If the character is '1', increment the count.
        - If the count is non-zero, store the count in the `noOfOnes` array at index `x` and increment `x`.

3. Calculate Number of Beams:

    - Iterate over the `noOfOnes` array from index 1 to the end.
    - For each index `i`, add the product of `noOfOnes[i - 1]` and `noOfOnes[i]` to the result `res`.

4. Result:
    - Return the final result `res`.

**Complexity Analysis for approach-1 :**<br/>

-   Time-Complexity: `O(n*m)` - where n is the no of element in the array, and m is the length of given array of string
-   Space-Complexity: `O(n)` - we are using an extra space to keep track each no of `1` is present in given array of string

**Complexity Analysis for approach-2 (constant space) :**<br/>

-   Time-Complexity: `O(n*m)` - where n is the no of element in the array, and m is the length of given array of string
-   Space-Complexity: `O(1)`
