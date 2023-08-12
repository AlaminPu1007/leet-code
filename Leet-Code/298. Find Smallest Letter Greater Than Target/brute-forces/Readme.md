## 744. Find Smallest Letter Greater Than Target

This problem is involved about, given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters. Return the smallest character in letters that is lexicographically greater than target.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)

**Algorithm :**<br/>

-   Iterate over all the characters in letters and for each `letter`, check if `letter > target`. If `letter > target`, return `letter`
-   We did not get any letter that is lexicographically greater than target. We `return letters[0]`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We loop through all of the characters in letters and compare them to target, which takes `O(n)` time for all nnn characters.
-   Space-Complexity: `O(1)`- we are not using any extra spaces.
