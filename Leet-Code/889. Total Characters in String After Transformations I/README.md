# 3335. Total Characters in String After Transformations I

This problem involved about, you are given a string s and an integer t, representing the number of transformations to perform. In one transformation, every character in s is replaced according to the following rules:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/total-characters-in-string-after-transformations-i/description)

**Key Insights :**<br/>

1. `Array-Based Frequency Tracking`: Use a fixed-size array (size 26) instead of a hash map for better performance
2. `Modulo Operation`: Use modulo 1e9+7 to prevent integer overflow
3. `Direct Index Access`: Calculate array indices directly from character values for faster lookups

**Algorithm Steps :**<br/>

1. `Initial Frequency Count`: Count occurrences of each character in the initial string using an array
2. `Transformation Simulation`:
    - For each time step:
        - Create a new frequency array
        - For each character in current array:
            - If not 'z', increment character and add to new array
            - If 'z', add both 'a' and 'b' to new array
3. `Result Calculation`: Sum all frequencies in the final array

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is string length
-   Space-Complexity: `O(26)` - for current and new frequency arrays
