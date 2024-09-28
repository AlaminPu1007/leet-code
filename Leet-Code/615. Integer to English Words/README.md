# 273. Integer to English Words

This problem involved about, convert a non-negative integer num to its English words representation.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/integer-to-english-words/description/)

**Approach :**<br/>

1. `Define Word Maps`:

    - Use three unordered maps to store words for numbers below 10, numbers below 20, and multiples of 10 below 100.

2. `Recursive Helper Function`:

    - Implement a helper function `Solve` that will handle the recursive conversion of the number into words.
    - This function breaks down the number into manageable parts and converts each part into words using the defined maps.

3. `Main Function`:
    - The main function `numberToWords` calls the helper function `Solve` for the given number.
    - Special case: If the number is 0, return "Zero".

**Recursive Conversion Details :**<br/>

-   `Numbers below 10`: Directly use the `belowTen` map.
-   `Numbers below 20`: Directly use the `belowTwenty` map.
-   `Numbers below 100`: Combine the words for tens and ones using the `belowHundred` and `belowTen` maps.
-   `Numbers below 1000`: Combine the word for hundreds and recursively solve for the remainder.
-   `Thousands, Millions, Billions`: Recursively solve for the larger parts (thousands, millions, billions) and combine them with the appropriate word.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(num))` - because we are dividing the number by 10, 100, 1000, etc., in each recursive step.
-   Space-Complexity: `O(log(num))` - due to the recursion stack.