## 1335. Minimum Difficulty of a Job Schedule

This problem involved about, you want to schedule a list of jobs in d days. Jobs are dependent (i.e To work on the ith job, you have to finish all the jobs j where 0 <= j < i).<br/>

You have to finish at least one task every day. The difficulty of a job schedule is the sum of difficulties of each day of the d days. The difficulty of a day is the maximum difficulty of a job done on that day.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/description/)

**Approach :**<br/>

1. Initialization:
    - Initialize a 2D array dp to store computed results of subproblems.
    - If the number of jobs is less than the given days (d), return -1 as it's impossible to schedule the jobs in d days.
2. DFS Function::
    - This function performs depth-first search with memoization.
    - The base case is when d (the number of days) is 1:
        - Calculate the maximum difficulty for a single day from the remaining jobs.
        - Return this maximum difficulty as it's the only day available.
3. Memoization:
    - If the result for the current parameters (idx, d) is already computed and stored in dp, return the stored result.
4. Iterative Approach:
    - Initialize maxDay with the current job's difficulty.
    - Use a loop to explore different partition points for the remaining jobs (from idx to n - d).
    - For each partition, calculate the maximum difficulty for the current day (maxDay) plus the minimum difficulty for the rest of the - days.
    - Update finalResult with the minimum value found among all partition points.
5. Store Result and Return:
    - Store the computed result in the dp array for future reference.
    - Return the minimum difficulty for the current parameters (idx, d).

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N^2 * D)` - The time complexity of this solution is `O(N^2 * D)`, where N is the number of jobs and D is the number of days. The solution explores all possible partitions of jobs for each day.

-   Space-Complexity: `O(O(N * D))` - The space complexity is `O(N * D)` due to the 2D dp array, which stores results for each subproblem of (idx, d) combinations.
-
