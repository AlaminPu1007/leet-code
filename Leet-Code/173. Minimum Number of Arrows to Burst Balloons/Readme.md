## 452. Minimum Number of Arrows to Burst Balloons

[Visit problem](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/)

**Approach :**<br>

-   Greedy algorithm
-   An arrow shoots through multiple intervals, all of which are coincident. We try to stack the overlapping intervals together and give a jump.
-   To facilitate identifying coincidence in a single traversal, we sort in ascending order on the right.

**Complexity Analysis :**<br>

-   Time complexity: `O(n*log(n))`
-   Space-Complexity: `O(1)`
