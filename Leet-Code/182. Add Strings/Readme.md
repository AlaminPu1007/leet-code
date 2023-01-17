## Add String

[Open Problem](https://leetcode.com/problems/add-strings/description/)

**Approach :**<br>

-   take a character from num1 and num2 and convert them into integer and put inside carry
-   Then put `carry % 10` inside `ans` after convert into string
-   divided carry by 10, so on
-   return reverse string of ans

**Complexity Analysis :**<br>

-   Time-Complexity: `O(N + M)`, where `n` and `m` is the string size
-   Space-Complexity: `O(1)`, without counting output as space
