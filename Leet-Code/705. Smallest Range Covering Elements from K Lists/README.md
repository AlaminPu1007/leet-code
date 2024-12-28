# 632. Smallest Range Covering Elements from K Lists

This problem involved about, you have k lists of sorted integers in non-decreasing order. Find the smallest range that includes at least one number from each of the k lists.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description)

#### Step 1: Min-Heap and Max Value Tracking

-   `Min-Heap`: To find the smallest range, we need to keep track of the smallest and largest values from the current elements of each list. We can use a min-heap (priority queue) to track the smallest element from all the lists.
    -   Each heap element is structured as `{value, {listIndex, itemIndex}}`, where `value` is the current element, `listIndex` is the index of the list, and `itemIndex` is the index of the element in that list.
-   `Max Value`: We also keep track of the largest element among the current smallest elements. This helps us calculate the current range and decide whether it needs to be updated.

#### Step 2: Populate the Min-Heap

-   Insert the first element of each list into the heap. This ensures that we have at least one element from each list to start with.
-   Keep track of the maximum value among these first elements. This will help define the upper bound of our initial range.

#### Step 3: Finding the Smallest Range

-   While the size of the heap equals `k` (i.e., one element from each list is represented):
    1. `Extract the minimum value`: Pop the smallest element from the heap, which gives the current minimum for the range.
    2. `Update the range`: If the difference between the current maximum and this minimum is smaller than the previously recorded range, update the result.
    3. `Push the next element`: Insert the next element from the same list from which the minimum element was taken. This helps maintain the one-element-per-list property in the heap.
    4. `Update the max value`: If the newly inserted element is larger than the current maximum value, update the `maxVal`.

#### Step 4: Termination

-   The loop terminates when one of the lists is exhausted, meaning we can no longer include an element from every list. At this point, the smallest valid range has been found.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(k))` - We process every element in the lists at least once, so the time complexity is `O(n * log(k))`, where `n` is the total number of elements across all lists.
-   Space-Complexity: `o(k)` - The heap stores at most `k` elements, so the space complexity is `O(k)`.
