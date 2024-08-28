# 2678. Number of Senior Citizens

This problem involved about, you are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. The system is such that:<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-senior-citizens/description/)

**Approach :**<br/>

1. **Iterate Through Details**:

    - Iterate over each string in the `details` list.
    - Extract the age from the 12th and 13th characters of each string.
    - Convert the extracted characters to an integer.
    - Check if the age is greater than 60 and count such instances.

2. **String Manipulation**:

    - Subtract the ASCII value of '0' to convert character digits to integers.
    - Multiply the tens place by 10 and add the units place to get the full age.

3. **Count Seniors**:

    - Maintain a counter to keep track of the number of seniors.
    - Increment the counter each time an age greater than 60 is found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of strings in the `details` list. Each string is processed in constant time.

-   Space-Complexity: `O(n)` - since we are using a fixed amount of extra space.