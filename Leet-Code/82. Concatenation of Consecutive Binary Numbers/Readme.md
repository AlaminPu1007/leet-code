# 1680. Concatenation of Consecutive Binary Numbers

Problem link: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/

**Problem :**<br>
Given an integer n, return the decimal value of the binary string formed by concatenating the binary representations of 1 to n in order, modulo 109 + 7.

**Approach :**<br>

- loop through n
- make ans with left shift(<<) by int(log2(i) and then mod with 1e9+7

**Complexity :**<br>

- Time-Complexity : O(n)
- Space-Complexity : O(1)
