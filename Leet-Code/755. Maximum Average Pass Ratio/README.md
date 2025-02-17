# 1792. Maximum Average Pass Ratio

This problem involved about, there is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array classes, where `classes[i] = [passi, totali]`. You know beforehand that in the ith class, there are `totali` total students, but only `passi` number of students will pass the exam.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-average-pass-ratio/description)

**Approach :**<br/>

1. `Key Insight`:

    - The `gain` of adding an extra student to a class is defined as:
    - To maximize the overall average pass ratio, prioritize adding students to the class with the highest gain.

2. `Algorithm`:

    - Use a max heap to keep track of the classes, prioritized by their potential gain.
    - Distribute the `extraStudents`:
        - Pop the class with the highest gain from the heap.
        - Add a student to the class, updating `passes` and `totalStudents`.
        - Recalculate the gain and push the updated class back into the heap.
    - Once all extra students are distributed, compute the final average pass ratio by summing up the ratios of all classes.

3. `Implementation Details`:
    - Use a lambda function to compute the gain efficiently.
    - Store the class information as a pair of `passes` and `totalStudents` in the heap, along with the negative gain to simulate a max heap.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Building the max heap: Inserting each class into the max heap takes `O(log(n))` time per insertion, and since there are n classes, this step takes `O(n * log(n))` time.
-   Space-Complexity: `O(n)` - The space complexity is determined by the max heap, which stores n elements.
