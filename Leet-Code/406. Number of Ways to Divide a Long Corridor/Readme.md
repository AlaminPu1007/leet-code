## 2147. Number of Ways to Divide a Long Corridor

This problem involved about, Along a long library corridor, there is a line of seats and decorative plants. You are given a 0-indexed string corridor of length n consisting of letters 'S' and 'P' where each 'S' represents a seat and each 'P' represents a plant.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/number-of-ways-to-divide-a-long-corridor/description/)

**Approach of recursion :**<br/>

1. Initialize a cache array to store the results of `sub-problems` to avoid redundant calculations.
2. Implement a recursive function DFS that explores all valid arrangements.
3. In the DFS function, check the base case:
    - If i is equal to the length of the corridor, check if the current arrangement is valid (seat == 2). If valid, return 1; otherwise, return 0.
4. Check if the result for the current state (i, seat) is already cached. If yes, return the cached result.
5. Explore two possibilities:
    - If seat is 2, either place a student in the current position or leave it empty. Update the result accordingly.
    - If seat is less than 2, either place a student in the current position or leave it empty. Update the result accordingly.
6. Memoize the result in the cache array.
7. Return the final result

**Approach of Optimal Solution :**<br/>

1. Initialize a result variable res to 1 to accumulate the number of ways.
2. Create a vector positionOfElement to store the positions of students in the corridor.
3. Iterate through the corridor and record the positions of students in the positionOfElement vector.
4. Check if the number of students is even and greater than zero. If not, return 0 as there is no valid arrangement.
5. Initialize prevIndex to 1 and iterate through the positions of students, calculating the spaces between consecutive students and updating the result.
6. The result is obtained by multiplying the intermediate results modulo M.
7. Return the final result.

**Complexity Analysis of Recursion :**<br/>

-   Time-Complexity: `O(n)` - where N is the length of the corridor. This is because each position in the corridor is visited once, and the results are cached to avoid redundant calculations.
-   Space-Complexity: `O(n)` - This is due to the space required for the cache array, which has dimensions `corridor.length() x 3`

**Complexity Analysis of Optimal Solution :**<br/>

-   Time-Complexity: `O(n)` - where N is the length of the corridor. This is because the algorithm iterates through the corridor once to identify the positions of students.
-   Space-Complexity: `O(n)` - due to the `positionOfElement` vector,
