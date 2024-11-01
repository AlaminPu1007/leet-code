## 857. Minimum Cost to Hire K Workers

This problem involved about, there are n workers. You are given two integer arrays quality and wage where quality[i] is the quality of the ith worker and wage[i] is the minimum wage expectation for the ith worker.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-cost-to-hire-k-workers/description/)

**Approach :**<br/>

-   Initializes a vector of pairs to store each worker's wage-to-quality ratio and quality.
-   Sorts the workers based on their wage-to-quality ratio in ascending order.
-   Initializes a priority queue to maintain the quality of the selected workers.
-   Iterates through the sorted workers and adds them to the priority queue while updating the total quality.
-   If the size of the priority queue exceeds k, removes the worker with the highest quality from the queue and updates the total quality accordingly.
-   Computes the cost for hiring k workers by multiplying the total quality with the wage-to-quality ratio of the last worker added to the queue.
-   Returns the minimum cost.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n)) + O(n * log(k))` - Sorting the workers + priority queue operations and iteration
-   Space-Complexity: `O(n)` - we are using an extra priority_queue + workersGroup spaces
