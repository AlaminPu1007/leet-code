## 56. Merge Intervals

-   [Visit Problem](https://leetcode.com/problems/merge-intervals/description/)

**Intuition :**<br/>

-   Sort the intervals based on their start times so that we can easily identify which intervals overlap.
-   Iterate through the sorted intervals and merge overlapping intervals into a single interval.
-   Return the merged intervals.
    This approach would require iterating over the intervals twice - once for sorting and once for merging. However, it should be noted that there may be more efficient ways to solve the problem, and the approach may need to be modified based on the specifics of the input and output requirements.

**Complexity Analysis :**<br/>

-   Time-Complexity :`O(n * log(n)) + O(n)` sort + iterate over the intervals array
-   Time-Complexity: `O(n) + O(n)`, O(n) temporary space for sorting + result array
