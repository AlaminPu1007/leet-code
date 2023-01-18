## 926. Flip String to Monotone Increasing

[Visit Problem](https://leetcode.com/problems/flip-string-to-monotone-increasing/description/)

**Approach-1 :**<br>

-   First count how many `0` present is string
-   then loop through `string` and check current `char` is equal to `0`
-   it it's, then get min value after decreasing no_of_zero by `1`
-   if not then increment no_of_zero by `one` and so on.

**Approach-2:**<br>
[Learn from here](https://leetcode.com/problems/flip-string-to-monotone-increasing/solutions/2912351/flip-string-to-monotone-increasing/)

**Complexity Analysis :**<br>

-   Approach - 1 <br>
    Time-Complexity: `O(n)`<br>
    Space-Complexity: `O(1)`<br>

-   Approach - 2 <br>
    Time-Complexity: `O(n)`<br>
    Space-Complexity: `O(1)`<br>
