# 2364. Count Number of Bad Pairs

This problem involved about, you are given a 0-indexed integer array `nums`. A pair of indices `(i, j)` is a bad pair if `i < j and j - i != nums[j] - nums[i]`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-number-of-bad-pairs/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given an array of integers `nums`.
    - A pair `(i, j)` is called a `bad pair` if `j - i != nums[j] - nums[i]`.
    - The goal is to count the total number of bad pairs in the array.

2. `Algorithm`:

    - Simplify the condition for a bad pair:
        - The condition `j - i != nums[j] - nums[i]` can be rewritten as `nums[i] - i != nums[j] - j`.
    - Transform the array by subtracting the index from each element: `nums[i] = nums[i] - i`.
    - Use a hashmap (`Map`) to count how many times each transformed value has been seen.
    - For each element, calculate the number of bad pairs by subtracting the count of the current transformed value from the current index.
    - Update the result and the hashmap accordingly.

3. `Steps`:
    - Initialize `res` to 0.
    - Transform the array: `nums[i] = nums[i] - i` for all `i`.
    - Iterate through the transformed array:
        - For each element, calculate the number of bad pairs as `(i - Map[item])`, where `item = nums[i]`.
        - Add this to `res`.
        - Update the count of `item` in the hashmap.
    - Return the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the size of the array.
-   Space-Complexity: `O(n)` - due to the hashmap storing up to `n` unique transformed values.
