## 239. Sliding Window Maximum

This problem involved about, you are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. <br/>

Return the max sliding window.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/sliding-window-maximum/description/)

**Approach :**<br/>

1. Initialization:

    - The `maxSlidingWindow` function takes a vector of integers `nums` and an integer `k`.
    - It calculates the maximum value in a sliding window of size `k` as it moves through the vector.

2. Algorithm:

    - Utilize a double-ended queue (deque) to efficiently track the maximum element in the current window.
    - Traverse the vector `nums` and perform the following steps for each element:
        - Remove elements from the front of the deque that are out of the current window.
        - Remove elements from the back of the deque that are smaller than the current element.
        - Add the index of the current element to the back of the deque.
        - If the current index is greater than or equal to `k - 1`, add the maximum element in the current window (front of the deque) to the result vector.
    - Continue this process until all elements are processed.

3. Result:
    - The function returns a vector containing the maximum values in each sliding window of size `k`.

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n)` - where N is the number of elements in the input vector `nums`. Each element is processed once.
-   Space-Complexity:`O(k)` - where k is the size of the sliding window. The space is used for the deque to store indices of elements within the window.
