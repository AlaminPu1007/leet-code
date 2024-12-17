# 440. K-th Smallest in Lexicographical Order

This problem involved about, given two integers n and k, return the kth lexicographically smallest integer in the range [1, n].

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/description)

## Approach

### Key Observations:

-   The problem can be thought of as navigating a lexicographical tree.
    -   The numbers from 1 to `n` form a tree-like structure where each number is represented as a node and its next lexicographical number as a child.
-   Each number has the potential to branch into its lexicographical children.
    -   For example, from `1`, we can branch into `10`, `100`, and so on.
-   The challenge is to efficiently skip over ranges of numbers that don't need to be counted by computing how many numbers exist in certain lexicographical ranges.

### Steps:

1. **Tree Navigation:**

    - Start at the root of the lexicographical tree (`cur = 1`), and initialize a counter `i` to track the k-th number as you traverse.
    - At each node, calculate the number of steps from the current prefix to the next one in lexicographical order (using the `count` function).
    - If the total steps from the current prefix is less than `k`, skip this prefix and move to the next.
    - If the steps exceed `k`, move deeper into the current prefix (lexicographically smaller subtree).

2. **Counting Function (`count`):**

    - For a given prefix `cur`, calculate how many numbers in the range `[cur, n]` are lexicographically smaller.
    - This is done by calculating the range of numbers at the current depth and repeating this for deeper levels.

3. **End Condition:**
    - Continue navigating the tree until `i` equals `k`, at which point the `cur` value will be the k-th smallest number.

## Algorithm

1. **Initialize `cur` as 1** (the smallest lexicographical number) and set `i` to 1 (since we start at 1).
2. **Traverse the Tree:**
    - For each node (starting with `cur`), calculate the number of steps between `cur` and `cur + 1` using the `count` function.
    - If the steps are less than `k - i`, increment `cur` to move to the next lexicographical number and update `i` by adding the steps.
    - If the steps exceed `k - i`, descend deeper into the current prefix by multiplying `cur` by 10.
3. **Repeat until `i` equals `k`**, then return `cur`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n) * log(n))` - For each iteration, the `count` function runs in `O(log n)` time because it calculates the number of steps at each level of the tree. The outer loop runs in `O(log n)` since we are effectively traversing the lexicographical tree, which has a depth proportional to `log n`.
-   Space-Complexity: `O(log(n))` - The space complexity is determined by the depth of the recursive calculations in countSteps. This is proportional to the number of digits in n, which is `O(log(n))`.