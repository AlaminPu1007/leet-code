## Power of Four

[Open Problem](https://leetcode.com/problems/power-of-four/)

**Approach :**<br>

-   A number can be considered a power of 4 when:

The number is a power of 2 for example : `4, 16, 64 …` all are powers of 2 as well . The `O(1)` bit manipulation technique using `n&(n-1)==0` can be used, but wait every power of `4` is a power of `2`. Will the reverse apply?<br>

Obviously not, `8,32,128 `… aren’t power of `4`, so we need one more check here. If you clearly notice all powers of `4` when divided by `3` gives `1` as the remainder.<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(1)`
-   Space-Complexity: `O(1)`

[Learn more](https://www.geeksforgeeks.org/find-whether-a-given-number-is-a-power-of-4-or-not/)
