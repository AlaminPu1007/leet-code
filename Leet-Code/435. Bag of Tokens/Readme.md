## 948. Bag of Tokens

This problem involved about, you start with an initial power of power, an initial score of 0, and a bag of tokens given as an integer array tokens, where each tokens[i] donates the value of tokeni. <br/>

Your goal is to maximize the total score by strategically playing these tokens. In one move, you can play an unplayed token in one of the two ways (but not both for the same token).

# Problem description

For better problem description please visit [](https://leetcode.com/problems/bag-of-tokens/description)

**Approach :**<br/>

1. Initialize variables `n` as the size of the `tokens` array, `l` as the left index, `r` as the right index, `res` as the maximum score, and `score` as the current score.
2. Sort the `tokens` array in ascending order.
3. Use a two-pointer approach where `l` and `r` represent the indices of the smallest and largest tokens respectively.
4. While the left pointer `l` is less than or equal to the right pointer `r`, perform the following:
    - If the current power is greater than or equal to the smallest token, perform a power operation by subtracting the token value from power, increment `l`, and increase the `score` and update `res` to the maximum score.
    - If the current score is greater than 0, perform a score operation by adding the token value to power, decrement `r`, and decrement the `score`.
    - If none of the above conditions are met, break out of the loop.
5. Return the maximum score `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where N is the size of the `tokens` array. The algorithm involves sorting the array.
-   Space-Complexity: `O(n)` - sorting requires extra `O(n)` spaces
