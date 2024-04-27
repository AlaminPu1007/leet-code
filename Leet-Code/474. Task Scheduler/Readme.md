## 621. Task Scheduler

This problem involved about, you are given an array of CPU tasks, each represented by letters A to Z, and a cooling time, n. Each cycle or interval allows the completion of one task. Tasks can be completed in any order, but there's a constraint: identical tasks must be separated by at least n intervals due to cooling time.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/task-scheduler/description/)

**Approach :**<br/>

1. Initialize an array `freq` of size 26 to store the frequency of each task character.
2. Iterate through the given `tasks` vector and count the frequency of each task character.
3. Use a priority queue `pq` to store the frequencies in descending order.
4. While the priority queue is not empty:
    - Initialize a variable `cycle` with the cooling period `n + 1` (as we can execute another task after each cooling period).
    - Initialize a variable `taskCount` to count the number of tasks executed in the current cycle.
    - Initialize an empty vector `store` to store the updated frequencies after executing tasks.
    - Execute tasks from the priority queue until either the cooling period is exhausted or the priority queue becomes empty:
        - Decrement the frequency of the task at the top of the priority queue and store the updated frequency in `store`.
        - Increment `taskCount`.
    - Restore the updated frequencies from `store` to the priority queue.
    - Update the total execution time `ans` by adding either `taskCount` or the cooling period, whichever is smaller. If the priority queue is empty, add only `taskCount`.
5. Return `ans` as the minimum time required to execute all tasks.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - In the worst case, all tasks must be processed, and each task might be inserted and extracted from the priority queue. The priority queue operations (insertion and extraction) have a time complexity of `O(log⁡(k))` each. Therefore, the overall time complexity is` O(N⋅log⁡k)`. Since kkk is at maximum 26, `log*k` is a constant term. We can simplify the time complexity to `O(N)`. This is a linear time complexity with a high constant factor.
-   Space-Complexity: `O(n)` - The space complexity is mainly determined by the frequency array and the priority queue.

**References:**<br/>

-   [Checkout LeetCode Official solution](https://leetcode.com/problems/task-scheduler/editorial/)
