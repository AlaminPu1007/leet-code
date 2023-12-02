## 1561. Maximum Number of Coins You Can Get

This problem involved about, There are 3n piles of coins of varying size, you and your friends will take piles of coins as follows

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/maximum-number-of-coins-you-can-get/description)

**Approach :**<br/>

1. Sort piles.
2. Initialize ans = 0.
3. Iterate i over the indices of piles, starting from 0 to len/3, and add piles[right] to ans
    1. decrement piles by 2
4. return ans

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n*log(n))` - We sort piles, which costs `O(n⋅log⁡n)`
-   Space-Complexity:`O(log(n))` - sorting required

**References :**<br/>

-   [Visit LeetCode official solution](https://leetcode.com/problems/maximum-number-of-coins-you-can-get/editorial)
