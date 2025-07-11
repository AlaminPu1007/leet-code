# 2999. Count the Number of Powerful Integers

This problem involved about, you are given three integers start, finish, and limit. You are also given a 0-indexed string s representing a positive integer.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-the-number-of-powerful-integers/description/)

**Key Insights :**<br/>

1. `Digit DP Concept`: Treat the problem as a digit dynamic programming problem where we count valid numbers up to N.
2. `Suffix Matching`: Numbers must end with exactly the given suffix `s`.
3. `Digit Constraints`: All prefix digits (before suffix) must be ≤ `limit`.

**Algorithm Steps:**<br/>

1. `Convert to Strings`: Convert start-1 and finish to strings to process digit-by-digit.
2. `Count Valid Numbers`: For both bounds, count numbers ending with `s` where prefix digits ≤ limit.
3. `Range Calculation`: Subtract the count for start-1 from finish count to get numbers in range.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O((n - m) * log(limit))` - n and m are lengths of start and finish.
-   Space-Complexity: `O(1)` - Only constant amount of spaces are used.
