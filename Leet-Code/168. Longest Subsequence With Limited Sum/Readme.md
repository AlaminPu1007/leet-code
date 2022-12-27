## 2389. Longest Subsequence With Limited Sum

[Open Problem](https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/)

**Approach-1:**<br>

-   Algorithm(Naive Approach)
-   Sort `nums`, and initialize an empty array answer
-   For each query query, we traverse the sorted num and collect numbers from lowest to highest, and record the maximum number of elements we can collect count before their sum exceeds query. Add count to answer.
-   Return answer when the iteration stops.

**Approach-2 (using prefix sum with binary search)**<br>

-   Get the prefix sum array presum of the sorted nums. Initialize an empty array answer.
-   Iterate over queries, for each query query, we use binary search to find its insertion index index and add index to answer.
-   Return answer when the iteration stops.

**Complexity Analysis of approach-1:**<br>

-   Time complexity: `O(m⋅n + n⋅log(⁡n))`
-   Space complexity: `O(n)`

**Complexity Analysis of approach-2:**<br>

-   Time complexity: `O(m + n * log(⁡n))`
-   Space complexity: `O(n)`

**References :**<br>
[Get Actual solution form leetcode](https://leetcode.com/problems/longest-subsequence-with-limited-sum/solutions/2644327/longest-subsequence-with-limited-sum/)
