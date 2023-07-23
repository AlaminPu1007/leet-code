## 1493. Longest Subarray of 1's After Deleting One Element

This problem involved about, gReturn the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.iven a binary array nums, you should delete one element from it.

# Problem description

For better explanation, please visit [LeetCode Page](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/)

**Algorithm :**<br/>

1. Initialize three variables:
    - zeroCount to 0; this is the number of zeroes in the current window.
    - longestWindow to 0; this is the longest window having at most one 0 we have seen so far.
    - start to 0; this is the left end of the window from where it starts.
2. Iterate over the array, and keep counting the zeroes in the variable zeroCount.
3. After every element, check if the zeroCount exceeds 1; if yes, keep removing elements from the left until the value of zeroCount becomes <= 1
4. Update the variable longestWindow with the current window length, i.e. i - start. Note that this subtraction will give the number of elements in the window minus 1, as we need to delete one element too
5. Return longestWindow

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each element in the array will be iterated over twice at max. Each element will be iterated over for the first time in the for loop; then, it might be possible to re-iterate while shrinking the window in the while loop. No element can be iterated more than twice. Therefore, the total time complexity would equal `O(N)`.
-   Space-Complexity: `O(1)` - Apart from the three variables, we don't need any extra space; hence the total space complexity is constant.
