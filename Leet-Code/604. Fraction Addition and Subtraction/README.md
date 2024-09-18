# 592. Fraction Addition and Subtraction

This problem involved about, given a string expression representing an expression of fraction addition and subtraction, return the calculation result in string format.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/fraction-addition-and-subtraction/description/)

**Approach :**<br/>

1. `Parsing the Expression`:

    - Iterate through the string expression and parse each fraction's numerator and denominator.
    - Handle both positive and negative fractions by checking the sign at the beginning.
    - Convert the numerator and denominator from their string representation to integers.

2. `Calculation`:

    - Maintain an ongoing sum of the fractions using a common denominator.
    - For each new fraction, adjust the current sum's numerator and denominator.
    - Use the formula:
      \[
      \text{new numerator} = (\text{current numerator} \times \text{new denominator}) + (\text{new numerator} \times \text{current denominator})
      \]
      \[
      \text{new denominator} = \text{current denominator} \times \text{new denominator}
      \]
    - Simplify the resulting fraction using the greatest common divisor (GCD).

3. `Final Output`:
    - Return the final numerator and denominator as a string in the form of `numerator/denominator`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the input string `expression`. The reason for this is that each character in the string is processed exactly once as we parse the numerators and denominators.

-   Space-Complexity: `O(1)` - meaning it uses a constant amount of extra space regardless of the size of the input. The space is used for storing the numerator, denominator, and a few integer variables.