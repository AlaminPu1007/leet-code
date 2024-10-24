## 2225. Find Players With Zero or One Losses

This problem involved about, you are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match. <br/>

Return a list answer of size 2 where: <br/>

-   answer[0] is a list of all players that have not lost any matches.
-   answer[1] is a list of all players that have lost exactly one match.

The values in the two lists should be returned in increasing order. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/)

**Approach :**<br/>

1. Initialization:

    - The `Solution` class provides a method `findWinners` to determine the winners and losers in a series of matches.

2. Algorithm (`findWinners`):

    - The method takes a vector of vectors `matches` as input, where each inner vector represents a match with two elements: [winner, loser].
    - Initialize an unordered map `lost` to keep track of the number of times each player lost.
    - Iterate through the matches and update the `lost` map based on the losers.
    - Initialize two vectors: `winner` to store the unique winners and `loses` to store the unique losers.
    - Iterate through the matches again:
        - For each match, check if the winner is not present in the `lost` map. If not, add the winner to the `winner` vector and set their loss count to 2 in the `lost` map.
        - If the loser has lost only once (count is 1), add the loser to the `loses` vector.
    - Sort both the `winner` and `loses` vectors in ascending order.

3. Result:
    - The method returns a vector of vectors containing two subvectors:
        - The first subvector (`winner`) represents the winners in ascending order.
        - The second subvector (`loses`) represents the losers who lost only once in ascending order.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(n))` - sorting the array can take `O(n*log(n))` time complexity
-   Time-Complexity: `O((n))` - we are using an extra spaces as a hash-map
