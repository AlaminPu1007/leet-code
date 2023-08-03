## 1870. Minimum Speed to Arrive on Time

This problem involved about, you are given a floating-point number hour, representing the amount of time you have to reach the office. To commute to the office, you must take n trains in sequential order. You are also given an integer array dist of length n, where dist[i] describes the distance (in kilometers) of the ith train ride.

# Problem description

For better explanation of this problem, please visit [LeetCode Page](https://leetcode.com/problems/minimum-speed-to-arrive-on-time/)

**Approach (Binary-Search)**<br/>

1. Initialize three variables left, right and minSpeed.
    - left is the left end of our initial search space; hence it should be initialized to 1.
    - right is the right end of our initial search space; hence initialize it to `10^7`
    - minSpeed is the minimum speed required; this is the answer to our problem. Initialize it to -1
2. Do the following while left <= right:
    - Find the middle of the current search space as mid
    - Find the time required with speed mid. Add all the individual time for each train ride; note that for all the rides except the last one, we need to round off the decimal to the next integer as we can start the next train only at an integer hour. The last ride, however, can end at a decimal
    - If the time required is less than or equal to hour, it implies the mid could be our answer. Hence store it in the variable minSpeed and shift the search space to the left of mid
    - If the time required is more than hour, then mid as well as the integers left of it cannot be the answer. Hence shift the search space to the right of mid
    - Return minSpeed

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(k))` - After each iteration, the search space gets reduced to half; hence the while loop will take `log(k)` operations. For each such operation, we need to call the timeRequired function, which takes `O(n)` time. Therefore, the total time complexity equals `O(n*log(k))`
-   Space-Complexity: `O(1)` - No extra space is required other than the three variables. Hence the space complexity is constant.
