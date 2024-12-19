# 2491. Divide Players Into Teams of Equal Skill

This problem involved about, you are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. Divide the players into `n / 2` teams of size 2 such that the total skill of each team is equal.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description)

**Approach :**<br/>

#### Step 1: Calculate Total Skill and Target Skill

-   First, calculate the total sum of all players' skill levels.
-   The total sum divided by half the number of players should give us the **target skill** for each pair.
-   If the total sum is not divisible by `n/2`, where `n` is the number of players, return `-1` because it's impossible to divide the players equally.

#### Step 2: Sorting and Pairing

-   Sort the players by their skill levels.
-   Iterate through the players from both ends of the sorted array:
    -   Start from the smallest skill and pair it with the largest skill.
    -   Check if their sum equals the target skill.
    -   If not, return `-1` as it's not possible to form pairs.

#### Step 3: Calculate the Result

-   For each valid pair, calculate the product of their skill levels and accumulate this into the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sort the array have required `O(n * log(n))` time complexity.
-   Space-Complexity: `O(n)` - Sorting required a extra spaces some cases
