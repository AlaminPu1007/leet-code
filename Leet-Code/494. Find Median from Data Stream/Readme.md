## 295. Find Median from Data Stream

This problem involved about, the median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/find-median-from-data-stream/description/)

**Approach :**<br/>

1. Maintain two heaps: a max heap (`left_max_heap`) to store the lower half of the elements and a min heap (`right_min_heap`) to store the upper half of the elements.
2. When adding a new number:
    - If `left_max_heap` is empty or the new number is smaller than the top element of `left_max_heap`, push it into `left_max_heap`.
    - Otherwise, push the new number into `right_min_heap`.
    - Balance the sizes of the two heaps so that the absolute difference between their sizes is at most 1:
        - If the size of `left_max_heap` is greater than the size of `right_min_heap` by more than 1, pop the top element from `left_max_heap` and push it into `right_min_heap`.
        - If the size of `right_min_heap` is greater than the size of `left_max_heap`, pop the top element from `right_min_heap` and push it into `left_max_heap`.
3. To find the median:
    - If the sizes of `left_max_heap` and `right_min_heap` are equal, return the average of their top elements.
    - Otherwise, return the top element of `left_max_heap`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - Adding a number and finding the median both take `O(log n)` time, where n is the number of elements in the heaps. This is because inserting an element into a heap and balancing the heaps take logarithmic time.
-   Space-Complexity: `O(n)` - The space complexity is `O(n)` to store the elements in the two heaps.
