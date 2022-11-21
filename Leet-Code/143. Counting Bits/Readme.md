## Counting Bits

[Problem](https://leetcode.com/problems/counting-bits/)

**Approach :**<br>

In this solution, we can think about whether the number is even or odd.<br>

If the number is even, the number of 1s is equal to the number which is half of it.<br>
For e.g., the number 8 has the same 1s as the number 4.<br>
The number `10` has the same amount of `1` bits as number 5.<br>
That is because number i is just left shift by `1` bit from number `i / 2`.<br>
Therefore, they should have the same number of `1` bits.<br>

If the numbers are odd, `e.g. 1, 3, 5, 7`.<br>
The number of `1` bits is equal to the number `(i - 1) + 1`.<br>
For e.g., for number 3, the number of `1` bits equals to the number `2 plus 1`.<br>
For number `11`, it equals to number `10 + 1`.<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
