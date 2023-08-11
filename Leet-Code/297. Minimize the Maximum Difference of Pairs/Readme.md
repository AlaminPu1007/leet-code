## 2616. Minimize the Maximum Difference of Pairs

This problem involved about, given a 0-indexed integer array nums and an integer p. Return the minimum maximum difference among all p pairs. We define the maximum of an empty set to be zero.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs/description/)

**Approach :**<br/>

1. Create a class Solution with a public method minimizeMax that takes a vector of integers 'nums' and an integer 'p' as input and returns an integer.
2. Inside minimizeMax method:
   a. Get the size 'n' of the nums vector.
   b. If n is less than or equal to 1, return 0.
   c. Sort the 'nums' vector in ascending order.
   d. Initialize 'left' as 0 and 'right' as the maximum value in the 'nums' array (nums[n - 1]).

3. While 'left' is less than 'right', do the following:
   a. Calculate 'mid' as the average of 'left' and 'right'.
   b. Call the calculatesMinimizeValue method with 'mid', 'nums', and 'p' as arguments:
   i. If the method returns true, update 'right' to 'mid'.
   ii. Otherwise, update 'left' to 'mid + 1'.

4. After exiting the binary search loop, return 'left' as the result.

5. Inside the Solution class, define a private method calculatesMinimizeValue that takes an integer 'value', a vector of integers 'nums', and an integer 'p' as input and returns a boolean.
   a. Initialize 'pairs' as 0.
   b. Get the size 'n' of the 'nums' vector.
   c. Iterate 'i' from 1 to 'n - 1' (inclusive) in steps of 1:
   i. If the difference between nums[i] and nums[i - 1] is less than or equal to 'value', increment 'pairs' and also increment 'i'.
   ii. If 'pairs' becomes greater than or equal to 'p', return true.
   d. After the loop, return false.

6. In the main function:
   a. Create an instance 'obj' of the Solution class.
   b. Define a vector of integers 'arr' with values {10, 1, 2, 7, 1, 3}.
   c. Define an integer 'p' with value 2.
   d. Call the minimizeMax method on the 'obj' instance with 'arr' and 'p' as arguments and print the result.

7. Return 0 to indicate successful execution of the program.

**Complexity Analysis :**<br/>

-   Time-Complexity: `o(n*log(n))` - we sort the array using predefined sort method, that require `O(n*log(n))` spaces, then we perform and binary operation for getting threshold, after we perform pairs operation using this threshold, that has also `O(n * log(n))` time complexity.
-   Space-Complexity: `O(n)` - for sort the root array, require `O(n)` spaces
