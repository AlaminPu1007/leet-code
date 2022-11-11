## 830. Positions of Large Groups

[Visit the problem](https://leetcode.com/problems/positions-of-large-groups/)

**Approach :**<br>
This is an two pointers approach<br>

Maintain pointers i, j with i <= j. The i pointer will represent the start of the current group, and we will increment j forward until it reaches the end of the group.<br>

We know that we have reached the end of the group when j is at the end of the string, or S[j] != S[j+1]. At this point, we have some group [i, j]; and after, we will update i = j+1, the start of the next group.<br>

**Complexity Analysis :**<br>

-   Time Complexity: `O(N)`, where NN is the length of S.

-   Space Complexity: `O(N)`, the space used by the answer.
