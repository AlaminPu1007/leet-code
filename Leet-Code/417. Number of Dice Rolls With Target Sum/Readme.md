## 1155. Number of Dice Rolls With Target Sum

This problem involved about, you have n dice, and each die has k faces numbered from 1 to k. <br/>

Given three integers n, k, and target, return the number of possible ways (out of the kn total ways) to roll the dice, so the sum of the face-up numbers equals target. Since the answer may be too large, return it modulo 109 + 7. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/description/)

**Approach :**<br/>

1. Initialization
    - Set the modular value MOD to 1e9 + 7.
2. Function - numRollsToTarget:
    - Create an unordered map cache to store computed results.
    - Return the result of the recursive function countNumOfRolls with initial parameters.
3. Function - countNumOfRolls:
    - Base case: If n (number of dice) is 0, return 1 if the target is also 0, otherwise return 0.
    - Create a unique key string using n and target to check if the result is already computed.
    - If the result for the current key is cached, return the cached result.
    - Initialize res to 0.
    - Iterate from 1 to k (number of faces on each die).
        - Recursively call countNumOfRolls for n - 1 dice with updated target - i.
        - Update res with the result, considering the modular arithmetic.
    - Cache the result for the current key.
    - Return the final result res.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * k * target)`
-   Space-Complexity: `O(n *  target)`
