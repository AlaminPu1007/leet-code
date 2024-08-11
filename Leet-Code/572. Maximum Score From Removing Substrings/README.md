# 1717. Maximum Score From Removing Substrings

This problem involved about, you are given a string s and two integers x and y. You can perform two types of operations any number of times.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-score-from-removing-substrings/description/)

**Approach :**<br/>

The problem is to maximize the score by removing pairs of characters ("ab" and "ba") from a given string. Each pair removal has an associated score. The strategy is to first remove the pair with the higher score as much as possible, then remove the other pair.

**Algorithm :**<br/>

1. **Determine the Pair to Remove First**:

    - Compare the scores `x` and `y` associated with removing pairs "ab" and "ba" respectively.
    - Identify the pair with the higher score and remove those pairs first.

2. **Remove Pairs and Calculate Score**:

    - Use a stack to remove pairs from the string efficiently.
    - For each character in the string:
        - Push the character onto the stack.
        - If the top two characters in the stack form the target pair, pop them from the stack and increase the score by the pair's associated score.

3. **Update the String**:

    - After processing the string, the remaining characters in the stack form the new string.
    - Reverse the stack content to restore the correct order and update the string.

4. **Repeat for the Other Pair**:
    - After removing the pairs with the higher score, repeat the process for the other pair using the updated string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string, since each character is processed a constant number of times.

-   Space-Complexity: `O(n)` - for the stack used to process the string.