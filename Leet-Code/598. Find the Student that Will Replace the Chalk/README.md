# 1894. Find the Student that Will Replace the Chalk

This problem involved about, there are n students in a class numbered from 0 to n - 1. The teacher will give each student a problem starting with the student number 0, then the student number 1, and so on until the teacher reaches the student number n - 1. After that, the teacher will restart the process, starting with the student number 0 again.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/description/)

**Approach :**<br/>

1. `Calculate the Total Chalk Consumption`:

    - First, calculate the sum of the chalk required by all students. This gives us the total amount of chalk needed for one full round of the students.
    - If `k` is greater than or equal to this total sum, we can reduce `k` by performing a modulo operation with the total sum. This step effectively reduces the problem to a smaller instance where `k` is less than the sum of the chalk required in one full round.

2. `Determine the Student to Replace the Chalk`:
    - Traverse the chalk array again, decrementing `k` by the chalk needed for each student.
    - The first student whose chalk requirement exceeds the remaining `k` is the one who will replace the chalk.

#### Detailed Steps

1. `Sum Calculation`:

    - Traverse the array and calculate the sum of all elements.
    - If at any point, the sum exceeds `k`, no need to continue summing, as `k` will be reduced soon.

2. `Modulo Reduction`:

    - Perform `k = k % sum` to reduce `k` to a manageable value, ensuring that `k` is less than the total sum of chalk.

3. `Find the Replacing Student`:
    - Traverse the array, and for each student, subtract their chalk requirement from `k`.
    - The student where `k` becomes negative or less than their chalk requirement is the student who will replace the chalk.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The time complexity is linear with respect to the number of students n. The first loop calculates the sum in O(n) time, and the second loop finds the student who will replace the chalk, also in O(n) time.
-   Space-Complexity: `O(1)` - The space complexity is constant as we only use a few extra variables (sum, n, etc.), regardless of the input size.