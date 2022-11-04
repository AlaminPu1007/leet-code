## 1945. Sum of Digits of String After Convert

[Problem link](https://leetcode.com/problems/sum-of-digits-of-string-after-convert/)

**Approach :**<br>

- make each character from string to integer
- after converting it, if it's value greater than 9 then `value % 10` get the last value, and `value / 10` get the first value from integer
- decrement `k` value by one
- loop through `remain k is not going to be 0 and sum >= 10`, each iteration take total sum and divide by 10,(previous similar approach)

**Complexity :**<br>

- Time-Complexity :`O(k * log(n))`//where k is the given value and log(n) is the divide each integer value
- Space-Complexity: `O(1)`
