# 1942. The Number of the Smallest Unoccupied Chair

This problem involved about, there is a party where n friends numbered from 0 to n - 1 are attending. There is an infinite number of chairs in this party that are numbered from 0 to infinity. When a friend arrives at the party, they sit on the unoccupied chair with the smallest number.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/description)

**Approach :**<br/>

#### Step 1: Handle Chair Assignments Using Heaps

To efficiently assign and track the smallest available chair, we use two priority queues:

-   `available_chairs`: A min-heap to track available chairs, sorted by chair index. This ensures that the smallest index is always assigned first.
-   `used_chairs`: A min-heap that stores the chairs currently in use, sorted by the leaving time of the friend. Once a friend leaves, their chair becomes available again.

#### Step 2: Track Friends and Chairs

-   For each friend:
    1. If any chairs are currently in use and the friend using that chair is due to leave before the current friend's arrival, we free up the chair by moving it from `used_chairs` to `available_chairs`.
    2. We assign the smallest available chair to the current friend and mark it as "in use" by adding it to `used_chairs`.

#### Step 3: Target Friend

-   As we process each friend, we check if they are the `targetFriend`. If so, we return the chair they were assigned.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sort the array can have required `O(n * log(n))` and iterate over the `times` array then adding, removing element from priority_queue also required `O(n * log(n))` time complexity.
-   Space-Complexity: `o(n)` - Sorting required extra `O(n)` space, and we are using an extra data structure `priority_queue`.
