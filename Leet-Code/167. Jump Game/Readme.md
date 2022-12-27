## Jump Game

[Visit Problem](https://leetcode.com/problems/jump-game/description/)

**Approach :**<br>
In the question, it's written "each element in the array represents your maximum jump length at that position."<br>
It means if we are at a position `k`, and `arr[k] = 5`, then it means we can jump forward a maximum of `5` steps from this position.<br>
It's our choice to jump `1,2,3,4 or 5` positions, but not more than `5`.<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`
