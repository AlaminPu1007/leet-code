## 1523. Count Odd Numbers in an Interval Range

[visit problem](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/)

**Approach 0f constant complexity:**<br>

-   Check if low is odd. This could be easily checked using % operator, but we used bit wise operator & as they are more efficient.
-   If low is odd, increment it.
-   Return `(high - low) / 2 + 1`. The important point here is to check that if low after incrementing became greater than high this will happen when low = high, and in that case, we should `return 0`.

**Complexity Analysis :**<br>

-   Time-Complexity: `O(1)`
-   Space-Complexity: `O(1)`
