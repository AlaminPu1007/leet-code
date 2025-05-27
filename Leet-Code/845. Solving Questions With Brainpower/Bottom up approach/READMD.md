# 2140. Solving Questions With Brainpower

This problem involved about, you are given a 0-indexed 2D integer array questions where `questions[i] = [pointsi, brainpoweri]`.
The array describes the questions of an exam, where you have to process the questions in order (i.e., starting from question 0) and make a decision whether to solve or skip each question. Solving question i will earn you `pointsi` points but you will be unable to solve each of the next `brainpoweri` questions. If you skip question i, you get to make the decision on the next question.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/solving-questions-with-brainpower/description/)

**Approach :**<br/>

1. `Problem Analysis`:

    - We are given a list of questions, where each question is represented as `[points, brainpower]`.
    - `points` is the score you get for solving the question.
    - `brainpower` is the number of questions you must skip after solving the current question.
    - The goal is to maximize the total points by strategically choosing which questions to solve.

2. `Algorithm`:

    - Use `dynamic programming` to solve the problem iteratively.
    - Define a DP array `dp[i]` to store the maximum points achievable starting from the `i-th` question.
    - Iterate through the questions in reverse order:
        1. For each question, decide whether to solve it or skip it:
            - If you solve the question, add its points and skip the next `brainpower` questions.
            - If you skip the question, move to the next question.
        2. Store the maximum of the two choices in the DP array.
    - Return `dp[0]`, which contains the maximum points achievable starting from the first question.

3. `Steps`:
    - Initialize a DP array `dp` of size `n + 1` with `0`.
    - Iterate through the questions in reverse order:
        1. Compute the result if the current question is solved:
            - Add the points of the current question.
            - Skip the next `brainpower` questions.
        2. Compute the result if the current question is skipped:
            - Move to the next question.
        3. Store the maximum of the two results in the DP array.
    - Return `dp[0]`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - each index is processed once due to memoization
-   Space-Complexity: `O(n)` - for dp array.
