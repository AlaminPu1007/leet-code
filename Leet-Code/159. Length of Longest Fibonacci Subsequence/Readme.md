## 873. Length of Longest Fibonacci Subsequence

[Visit the problem](https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/description/)

**Approach-1 :**<br>
Every Fibonacci-like subsequence has each two adjacent terms determine the next expected term. For example, with `2, 5`, we expect that the sequence must continue `7, 12, 19, 31,` etc.

We can use a Set structure to determine quickly whether the next term is in the array A or not. Because of the exponential growth of these terms, there are at most 43 terms in any Fibonacci-like subsequence that has maximum value `≤10^9`<br>

**Complexity Analysis:**<br>

-   Time-Complexity: `O(N^2*log M)`, where NNN is the length of A, and MMM is the maximum value of A.
-   Space-Complexity: `O(N)` ,the space used by the set `S`
