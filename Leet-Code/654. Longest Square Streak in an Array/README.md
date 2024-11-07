# 2501. Longest Square Streak in an Array

This problem involved about, you are given an integer array nums. A subsequence of nums is called a square streak if:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/longest-square-streak-in-an-array/description)

**Approach :**<br/>

1. `Use a Hash Map`:

    - Create a hash map to store the count of each element in `nums`.
    - This allows constant time lookups for determining if an element and its square exist in the array.

2. `Iterate Over Each Element`:
    - For each element, try to build the longest square streak starting with that element.
    - Initialize `currentStreak` to 0 and `current` to the element.
3. `Square and Check Sequence`:

    - While the square of the `current` element exists in the hash map, increase the streak and update `current` to its square.
    - If the next square exceeds `10^5` (a problem constraint), break out of the loop.

4. `Update Result`:
    - Track the maximum streak encountered for any starting element.
    - Return `-1` if the maximum streak length is less than 2.

**Complexity Analysis :**<br/>

-   Time-Complexity : `O(n)` - where `n` is the number of elements in `nums`. Each element is processed once.
-   Space-Complexity: `O(n)` - required for storing elements in the hash map.
