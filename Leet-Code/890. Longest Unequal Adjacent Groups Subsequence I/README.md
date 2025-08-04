# 2900. Longest Unequal Adjacent Groups Subsequence I

This problem involved about, You are given a string array words and a binary array groups both of length n, where words[i] is associated with groups[i]. Your task is to select the longest alternating subsequence from words. A subsequence of words is alternating if for any two consecutive strings in the sequence, their corresponding elements in the binary array groups differ. Essentially, you are to choose strings such that adjacent elements have non-matching corresponding bits in the groups array.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/description)

**Key Insights :**<br/>

1. `Subsequence Definition`: Must preserve original order but can skip elements
2. `Alternating Groups`: Consecutive elements in the subsequence must have different group values
3. `Greedy Selection`: The first valid element at each position gives the longest possible subsequence

**Algorithm Steps :**<br/>

1. `Initialize Result`: Empty vector to store the subsequence
2. `Iterate Through Words`:
    - Always include the first word
    - For subsequent words, include only if its group differs from the previous included word's group
3. `Return Result`: The constructed subsequence

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is number of words.
-   Space-Complexity: `O(n)` - where n is size of result.
