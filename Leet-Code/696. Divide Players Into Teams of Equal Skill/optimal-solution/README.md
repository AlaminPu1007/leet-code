# 2491. Divide Players Into Teams of Equal Skill

This problem involved about, you are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. Divide the players into `n / 2` teams of size 2 such that the total skill of each team is equal.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description)

**Approach :**<br/>

#### Step 1: Calculate Total Skill and Target Skill

-   First, calculate the total sum of all players' skill levels.
-   The total sum divided by half the number of players gives the **target skill** for each pair.
-   If the total sum is not divisible by `n/2`, return `-1` as it's impossible to divide the players equally.

#### Step 2: Use a Hash Map for Frequency Counting

-   Use an **unordered map** to count the frequency of each skill level.
-   For each skill, check if its complement (i.e., `target - skill`) exists in the map and has an equal frequency. If not, return `-1`.

#### Step 3: Calculate the Result

-   For each valid pair, calculate the product of their skill levels, and accumulate this into the result.
-   Divide the result by 2, as each product is counted twice.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n )` - Counting frequencies using the hash map takes `o(n)`, valid pairs also takes `O(n)`
-   Space-Complexity: `O(n)` - We are using an extra hash map
