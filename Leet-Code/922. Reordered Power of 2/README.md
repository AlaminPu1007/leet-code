# 869. Reordered Power of 2

This problem involved about, you are given an integer n. We reorder the digits in any order (including the original order) such that the leading digit is not zero.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/reordered-power-of-2/description)

**Key Insights :**<br/>

1. `Digit Frequency Matching`: Instead of generating all permutations (which is computationally expensive), we can compare sorted digit representations.
2. `Power of 2 Precomputation`: All possible powers of 2 within integer range can be preprocessed for comparison.
3. `Efficient Comparison`: By sorting digits of both the input number and powers of 2, we can do direct string comparisons.

**Algorithm Steps :**<br/>

1. `Digit Normalization`:
    - Convert the input number to a string and sort its digits
2. `Power of 2 Generation`:
    - Generate all powers of 2 up to 2³⁰ (within 32-bit integer range)
    - For each power, sort its digits
3. `Comparison`:
    - Compare the sorted digits of input number with each sorted power of 2
    - Return true if any match is found

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where `n` is number of digits (max 10 digits for 32-bit int)
-   Space-Complexity: `O(n)` - space for storing digit strings.
