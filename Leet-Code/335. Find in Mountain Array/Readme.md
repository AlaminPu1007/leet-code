## 1095. Find in Mountain Array

This problem involved about, we have to find the target minimum index.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-in-mountain-array/description/)

**Approach :**<br/>

1. Find the peak:

    - First, we need to find the peak of the mountain array, which is the highest element in the array. We can use a binary search algorithm to efficiently locate the peak. The peak is the element where its neighbors are smaller. So, we compare the middle element with its adjacent elements, and based on the comparison, we move either left or right until we find the peak.

2. Binary Search in Left and Right Segments:
    - After finding the peak, we divide the mountain array into two segments: one on the left, which is in ascending order, and the other on the right, which is in descending order. We can then perform two binary searches, one in the left segment and the other in the right segment, to find the target element.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(3 * log(n)) = O(log(n))` - we perform an binary search to find the target
-   Space-Complexity: `O(1)`
