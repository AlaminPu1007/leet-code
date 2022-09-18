# 8. String to Integer (atoi)

Problem link: https://leetcode.com/problems/string-to-integer-atoi/

**Approach :**<br>

- Remove all white space
- get positive/negative sign
- remove leading zero
- convert string to integer
- multiply ans with flat(positive = 1 || negative = -1)
- if ans > INT_MAx or INT_MIN return it
- Otherwise return original ans

**Complexity :**<br>
Time-Complexity : O(n)<br>
Space-Complexity : O(1)<br>
