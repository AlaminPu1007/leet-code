## 2540. Minimum Common Value

This problem involved about, given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, return the minimum integer common to both arrays. If there is no common integer amongst `nums1` and `nums2`, return `-1`.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-common-value/description)

**Approach (Hash-Map):**<br/>

1. Initialize an unordered map `Map` to store the frequency of elements from `nums1`.
2. Iterate through `nums1` and count the frequency of each element in the map.
3. Iterate through `nums2` and for each element, check if it exists in the map `Map`.
4. If the element is found in the map, return the common element.
5. If no common element is found, return -1.

**Complexity Analysis (Hash-Map):**<br/>

-   Time-Complexity: `O(n) + O(m)` - Iterate over the array and making key value pairs of each element of nums1, required `O(n)` time complexity. Then we iterator over the `nums` and check each element is present in our hash table, that also required `O(m)` time complexity.
-   Space-Complexity: `O(n)` - We are using an extras hash-map to hold key-value pairs

## Two pointer approach

**Approach :**<br/>

1. Initialize two pointers `first` and `second` to traverse `nums1` and `nums2`, respectively.
2. While both pointers are within the array bounds:
    - If the element at `nums1[first]` is less than the element at `nums2[second]`, move `first` pointer to the next element.
    - If the element at `nums1[first]` is greater than the element at `nums2[second]`, move `second` pointer to the next element.
    - If both elements are equal, return the common element.
3. If no common element is found, return -1.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n) + O(m)` - The algorithm iterates through both arrays once, so the time complexity is O(n + m).

-   Space-Complexity: `O(1)` - as the algorithm only uses a constant amount of extra space
