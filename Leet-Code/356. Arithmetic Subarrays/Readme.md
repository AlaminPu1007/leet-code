## 1630. Arithmetic Subarrays

This problem involved about, a sequence of numbers is called arithmetic if it consists of at least two elements, and the difference between every two consecutive elements is the same. More formally, a sequence s is arithmetic if and only if `s[i+1] - s[i] == s[1] - s[0]` for all valid i.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/arithmetic-subarrays/description)

**Approach :**<br/>

1. Main Function `(checkArithmeticSubarrays)`:

    - Iterate through each query represented by the left and right indices.
    - Extract the subarray from the original array based on the current query.
    - Call the private function arithmeticSubarray to check if the extracted subarray is an arithmetic subarray.
    - Store the result in a vector.

2. Helper Function `(arithmeticSubarray)`:
    - Sort the given subarray.
    - Calculate the difference (diff) between the second and first elements.
    - Iterate through the sorted subarray from the third element onward and check if the difference between consecutive elements is equal to diff.
    - If the difference is not equal for any pair, return false. Otherwise, return true.

**Approach-2:**<br/>

-   we are using simple math trick to avoid sort the array

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(m*n*log(n))` - There are `m` queries, and sorting array can take `O(n*log(n))` time complexity
-   Space-Complexity: `O(n)` - we are using an extra array for queries array & resultant array

**Complexity Analysis 2 (Optimal):**<br/>

-   Time-Complexity: `O(m*n)` - There are `m` queries, and find the diff has `O(n)` time complexity
-   Space-Complexity: `O(n)` - we are using an extra array for queries array & resultant array
