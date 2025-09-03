# 1125. Smallest Sufficient Team

This problem involved about, in a project, you have a list of required skills req_skills, and a list of people. The ith person people[i] contains a list of skills that the person has.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/smallest-sufficient-team/description/)

**Key Insights :**<br/>

1. `Bitmask Representation`: Represent skills as bits in an integer for efficient combination checks
2. `Backtracking with Pruning`: Explore all possible team combinations while pruning suboptimal paths
3. `Memoization`: Cache intermediate results to avoid redundant computations

**Algorithm Steps :**<br/>

1. `Skill Mapping`:

    - Create a mapping from each skill to its bit position
    - Convert each person's skills into a bitmask

2. `Backtracking Search`:

    - Recursively explore including/excluding each person
    - Track current skill coverage with a bitmask
    - Prune paths that can't yield a better solution than current best

3. `Result Tracking`:
    - Update the result when a valid team is found
    - Ensure only the smallest team is kept

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(m * 2^n)` - where n is the number of skills and m is the number of people.
-   Space-Complexity: `O(m + 2^n)` - where n is the number of skills and m is the number of people.
