## 552. Student Attendance Record II

This problem involved about, an attendance record for a student can be represented as a string where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/student-attendance-record-ii/description/)

**Approach :**<br/>

1. **Initialization**:

   - Create a 3D DP table `dp` where `dp[n][countAbsence][countLate]` stores the number of valid sequences of length `n` with `countAbsence` absences and `countLate` continuous late days.
   - Initialize the DP table with `-1` to indicate un-computed states.

2. **Recursive Function with Memoization**:

   - Define a recursive function `DFS` that computes the number of valid sequences for the remaining length `n` with given counts of absences and continuous late days.
   - Base cases:
     - If the count of absences is 2 or more, or the count of continuous late days is 3 or more, return 0 (invalid sequence).
     - If `n` is 0, return 1 (valid sequence).
     - If the value is already computed in the DP table, return that value.
   - Recursive cases:
     - Calculate the number of valid sequences by considering three scenarios:
       - Adding a 'P' (present): Reset the count of continuous late days.
       - Adding an 'A' (absence): Reset the count of continuous late days and increment the count of absences.
       - Adding an 'L' (late): Increment the count of continuous late days.

3. **Result**:
   - Call the recursive function `DFS` with initial parameters to compute the number of valid sequences of length `n`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - Our recursive function will only evaluate `n × 3 × 4` unique sub-problems due to memorization.
- Space-Complexity: `O(n*3*4) => O(n)` - We initialized an additional array `dp`