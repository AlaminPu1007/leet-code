# 2410. Maximum Matching of Players With Trainers

This problem involved about, you are given a 0-indexed integer array players, where players[i] represents the ability of the ith player. You are also given a 0-indexed integer array trainers, where trainers[j] represents the training capacity of the jth trainer.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-matching-of-players-with-trainers/description)

**Key Insights :**<br/>

1. `Greedy Matching`: Optimal matching can be achieved by pairing the smallest available player with the smallest suitable trainer
2. `Sorting`: Sorting both arrays enables efficient matching via two-pointer technique
3. `Linear Scan`: After sorting, we can match players and trainers in a single pass

**Algorithm Steps :**<br/>

1. `Sort Arrays`:
    - Sort players in ascending order
    - Sort trainers in ascending order
2. `Two-Pointer Technique`:
    - Initialize pointers at start of both arrays
    - For each player, find the smallest suitable trainer
    - Count successful matches
3. `Return Result`: Total number of successful matches

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - where n is number of players. Sorting required `O(n * log(n))` complexity.
-   Space-Complexity: `O(log(n) + log(m))` - The space complexity mainly refers to the additional space required for sorting.
