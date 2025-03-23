# 2948. Make Lexicographically Smallest Array by Swapping Elements

This problem involved about, you are given a 0-indexed array of positive integers `nums` and a positive integer limit

## problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/make-lexicographically-smallest-array-by-swapping-elements/description)

**Approach :**<br/>

1. `Sorting to Group Elements`:

    - Sort `nums` to organize elements in ascending order.
    - Group elements such that the absolute difference between consecutive elements in a group is at most `limit`.

2. `Mapping Elements to Groups`:

    - Use a `deque` to store groups, where each group is represented by a deque of integers.
    - Maintain a mapping of elements to their corresponding group indices for efficient retrieval.

3. `Constructing the Resultant Array`:

    - Traverse the original array `nums`.
    - Replace each element with the smallest available value from its corresponding group.

4. `Deque Usage`: - A deque allows efficient insertion and removal of elements at both ends. - It helps to manage the smallest element in a group effectively.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Sorting `nums` takes `O(n * log(n))`.
-   Space-Complexity: `O(n)` - A `deque` of `deques` to store groups, which may hold all elements in the worst case: `O(n)`.
