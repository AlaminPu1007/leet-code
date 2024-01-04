## 1688. Count of Matches in Tournament

This problem involved about, you are given an integer n, the number of teams in a tournament that has strange rules.

# Problem description

For better problem description, please visit[LeetCode Pages](https://leetcode.com/problems/count-of-matches-in-tournament/description)

**Approach :**<br/>

1. If the current number of teams is even, each team gets paired with another team. A total of` n / 2` matches are played, and `n / 2` teams advance to the next round.

2. If the current number of teams is odd, one team randomly advances in the tournament, and the rest gets paired. A total of `(n - 1) / 2` matches are played, and `(n - 1) / 2 + 1` teams advance to the next round.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - At each step in the while loop, we divide n or n - 1 by two.

-   Space-Complexity: `O(1)`
