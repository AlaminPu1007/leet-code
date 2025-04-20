# 781. Rabbits in Forest

This problem involved about, there is a forest with an unknown number of rabbits. We asked n rabbits "How many rabbits have the same color as you?" and collected the answers in an integer array answers where answers[i] is the answer of the ith rabbit.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/rabbits-in-forest/description/)

**Key Insights :**<br/>

1. `Group Formation`: Rabbits with the same answer must belong to groups of size (answer + 1)
2. `Frequency Counting`: Count how many rabbits gave each answer
3. `Group Calculation`: For each answer, calculate how many full groups are needed to accommodate all rabbits with that answer

**Algorithm Steps :**<br/>

1. `Count Frequencies`: Use a hash map to count occurrences of each answer
2. `Calculate Groups`:
    - For each answer `x`, the group size is `x + 1`
    - Number of groups = ceil(count / group_size)
3. `Sum Rabbits`: Multiply group size by number of groups for each answer
4. `Return Total`: Sum all rabbits across all groups

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is number of rabbits.
-   Space-Complexity: `O(n)` - where m is number of unique answers holding in hash-map.
