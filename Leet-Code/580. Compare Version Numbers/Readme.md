## 165. Compare Version Numbers

This problem involved about, given two version numbers, version1 and version2, compare them.<br/>

Version numbers consist of one or more revisions joined by a dot '.'. Each revision consists of digits and may contain leading zeros. Every revision contains at least one character. Revisions are 0-indexed from left to right, with the leftmost revision being revision 0, the next revision being revision 1, and so on. For example 2.5.33 and 0.1 are valid version numbers.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/compare-version-numbers/description/)

**Approach :**<br/>

1. Start by iterating through both versions (`version1` and `version2`) simultaneously using two pointers `i` and `j` to track the current position in each version.
2. While iterating through the versions, compare each segment of the version numbers delimited by '.'.
3. Extract the numerical value of each segment using a helper function `getReversion`.
4. Compare the numerical values obtained from both versions segment by segment:
    - If the numerical value of `version1` segment is greater than `version2` segment, return 1 indicating `version1` is greater.
    - If the numerical value of `version2` segment is greater than `version1` segment, return -1 indicating `version2` is greater.
    - If the numerical values are equal, continue comparing the next segments.
5. If one version has more segments than the other, consider the additional segments as 0.
6. If all segments of both versions are equal, return 0 indicating both versions are equal.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n + m)` - We iterate through both versions simultaneously
-   Space-Complexity: `O(1)` - The algorithm uses only a constant amount of extra space
