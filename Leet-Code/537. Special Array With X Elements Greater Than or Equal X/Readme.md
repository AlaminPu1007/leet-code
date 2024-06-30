## 1608. Special Array With X Elements Greater Than or Equal X

This problem involved about, you are given an array `nums` of non-negative integers. `nums` is considered special if there exists a number x such that there are exactly x numbers in `nums` that are greater than or equal to x.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description)

### Brute Force approach

**Approach :**<br/>

1. Iterate over `1 to n` where n is the size of the array.(The answer always lies in between this).
2. Then iterate over the `nums` array and count the greater element that larger or equal to `i`
3. If the count and i both as exact same value then `return i`.
4. Other wise `return -1`

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n^2)` - Iterate over n and then iterate over the whole array can cause to `O(n^2)` time complexity.

- Space-Complexity: `O(1)` - we are not using any kind of additional spaces that would be increase with input size.

### Binary Search (Optimal Approach)

**Approach :**<br/>

1. **Sort the Array**:

   - Start by sorting the array `nums`.

2. **Iterate Over Possible Values of X**:

   - Iterate through each integer `i` from 1 to `n` (where `n` is the size of the array).
   - For each `i`, use a helper function `getFirstItemIndex` to determine the count of elements greater than or equal to `i`.

3. **Binary Search**:

   - The `getFirstItemIndex` function uses binary search to find the first index where the element is greater than or equal to the target.
   - The function returns the count of such elements.

4. **Check the Condition**:

   - If the count of elements greater than or equal to `i` is equal to `i`, return `i` as the special value.

5. **Return -1 if No Special Value Found**:
   - If no such value `i` is found, return -1.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * log(n))` - Sorting the array takes `O(n log n)`, For finding the answer and perform binary search also take `O(n log n)`

- Space-Complexity: `O(1)` - we are not using any kind of additional spaces that would be increase with input size.

### Counting sort (Most Optimal Approach)

**Approach :**<br/>

1. **Initialize Frequency Array**:

   - Create a frequency array `freq` of size `n+1` (where `n` is the size of the input array `nums`).
   - Initialize all elements of `freq` to 0.

2. **Count Frequencies**:

   - Iterate through the array `nums`.
   - For each element, increment the count in `freq` at the index `min(n, nums[i])`.
   - This ensures that any value greater than `n` is counted in `freq[n]`.

3. **Calculate Cumulative Counts**:

   - Initialize `total_count` to 0.
   - Iterate backwards through the frequency array `freq`.
   - For each index `i`, add the frequency `freq[i]` to `total_count`.
   - If `total_count` equals `i` at any point, return `i` as the special value.

4. **Return -1 if No Special Value Found**:
   - If no such value `i` is found, return -1.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - Counting frequencies and computing cumulative counts both take linear time.

- Space-Complexity: `O(n)` - The frequency array `freq` requires linear space.