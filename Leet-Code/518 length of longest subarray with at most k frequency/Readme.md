## 2958. Length of Longest Subarray With at Most K Frequency

This problem involved about, you are given an integer array nums and an integer k. The frequency of an element x is the number of times it occurs in an array. An array is called good if the frequency of each element in this array is less than or equal to k. Return the length of the longest good subarray of nums.<br/>
A subarray is a contiguous non-empty sequence of elements within an array.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description)

**Approach :** <br/>

1. Initialize variables `n` as the size of the input array `nums`, an unordered map `Map` to store the frequency of elements, `ans` to store the maximum length of subarray with sum equals `k`, and `left` to keep track of the left pointer of the sliding window.
2. Iterate through the array using the right pointer `i`.
3. Increment the frequency of the current element `nums[i]` in the map `Map`.
4. While the frequency of the current element becomes greater than `k`, decrement the frequency of the element at the left pointer `left` and move the left pointer to the right.
5. Update the maximum length `ans` by taking the maximum of the current maximum and the difference between the right and left pointers plus one (length of the current subarray).
6. Repeat steps 2-5 until the end of the array is reached.
7. Return the maximum length `ans`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the size of the input array `nums`. The algorithm involves iterating through the array once.
-   Space-Complexity: `O(n)` - as the algorithm uses an unordered map to store the frequency of elements in the array.
