# 260. Single Number III

This problem involved about, given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.<br/>

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/single-number-iii/description/)

**Intuition :**<br/>

The problem requires us to find the two unique numbers in an array where every other number appears exactly twice. To solve this, we can utilize bitwise operations effectively.<br/>

1. **XOR Operation :** - XOR of a number with itself is 0 and the XOR of a number with 0 is the number itself. XOR of two different numbers gives a non-zero result.

2. **Finding the Difference :** - XORing all numbers in the array gives us the XOR of the two unique numbers `(x ^ y)`.

3. **Separating the Numbers :** - To separate x and y, we can find a bit position where x and y differ. This can be done by finding the rightmost set bit in the XOR result.

4. **Dividing into Two Groups :** - Using the identified bit, divide the array into two groups and XOR the numbers in each group to find the two unique numbers.

**Approach :**<br/>

1. Compute the XOR of all elements in the array to get xorXY, which is x ^ y.

2. Identify a bit position pos where xorXY has a set bit (i.e., the two numbers differ at this bit).

3. Divide the array into two groups based on the bit at position pos. XOR all elements in the group where this bit is set to get one unique number (x). The other unique number (y) can be found by XORing x with xorXY.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We iterate through the array multiple times but each pass is linear in complexity.
-   Space-Complexity: `O(1)` - We are not using any kind of extra spaces that will grow with input size.
