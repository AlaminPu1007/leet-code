## 946. Validate Stack Sequences

-   [Visit Problem](https://leetcode.com/problems/validate-stack-sequences/description/)

**Approach :**<br/>

-   For each value, push it to the stack.
-   Then, greedily pop values from the stack if they are the next values to pop.
-   At the end, we check if we have popped all the values successfully.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
