## 1845. Seat Reservation Manager

This problem involved about, Design a system that manages the reservation state of n seats that are numbered from 1 to n.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/seat-reservation-manager/description/)

**Approach :**<br/>

1. Create a min-heap availableSeats that initially contains all seats from 1 to n.
2. In the reserve() method, pop the first element of the availableSeats heap and return it.
3. In the unreserve(seatNumber) method, we push seatNumber into the availableSeats heap.

**Complexity Analysis Approach-1:**<br/>

-   Time-Complexity: `O(n * log(n))` - we iterate over all n seats and push it into our heap, each push operation takes `O(log(n))` time, thus, overall it will take `O(n * log(⁡n))` time.
-   Space-Complexity: `O(n)` - we are using an extra `queue` data-structure

**Complexity Analysis Approach-2:**<br/>

-   Time-Complexity: `O(n* log(n))` - There are a maximum of `n` calls to `reserve()` or `unreserve()` methods, thus the overall time complexity is `O(m * log(⁡n))`.
-   Space-Complexity: `O(n)` - we are using an extra `queue` data-structure
