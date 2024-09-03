# 1460. Make Two Arrays Equal by Reversing Subarrays

This problem involved about, you are given two integer arrays of equal length target and arr. In one step, you can select any non-empty `subarray` of arr and reverse it. You are allowed to make any number of steps.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description)

**Approach :**<br/>

1. **Count Frequencies in `target`**:

    - Use a hash map to count the occurrences of each element in the `target` array.

2. **Adjust Frequencies with `arr`**:

    - Iterate through the `arr` array and adjust the counts in the hash map.
    - Decrease the count for each element in `arr`.

3. **Check for Equality**:
    - If all counts in the hash map are zero, the arrays can be made equal.
    - Otherwise, they cannot be made equal.

**Detailed Algorithm :**<br/>

1. **Initialize the Hash Map**:

    - Create an unordered map `Map` to store the frequency of elements in `target`.

2. **Count Elements in `target`**:

    - Iterate through each element in `target` and increment its count in `Map`.

3. **Adjust Counts with `arr`**:

    - Iterate through each element in `arr`.
    - Decrease its count in `Map`.
    - If the count of an element becomes zero, remove it from `Map` to keep the map clean.

4. **Check the Map**:

    - After processing all elements, if `Map` is empty (all counts are zero), return `true`.
    - Otherwise, return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Where `O(n)` is the size of the input arrays. This is because we iterate through both arrays once.
-   Space-Complexity: `O(n)` - due to the space required for the hash map to store the counts of elements.
