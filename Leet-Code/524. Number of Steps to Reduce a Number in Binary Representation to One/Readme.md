## 1404. Number of Steps to Reduce a Number in Binary Representation to One

This problem involved about, Given the binary representation of an integer as a string s, return the number of steps to reduce it to 1 under the following rules:

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/description/)

**Approach :**<br/>

1. **Initialization**:
   - Initialize a counter `count` to keep track of the number of steps.
2. **Process the Binary String**:

   - While the size of the string `s` is greater than 1:
     - Check the last character of the string to determine if the number is even or odd.
     - If the last character is '0' (even), remove it (equivalent to dividing by 2).
     - If the last character is '1' (odd), add 1 to the number by modifying the string appropriately.
     - Increment the step counter.

3. **Helper Methods**:

   - **dividedByTwo**: This method removes the last character of the string, simulating the division by 2.
   - **addByOne**: This method adds 1 to the binary number represented by the string by modifying the appropriate bits.

4. **Termination**:
   - Return the step counter when the string is reduced to a single character '1'.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n^2)` - In the worst case, adding 1 to a binary string can take `O(n)` time (when a carry propagates through the entire string). As we perform this operation at most `n` times, the total time complexity can be `O(n^2)`.

- Space-Complexity: `O(1)` - We use a constant amount of extra space apart from the input string itself.