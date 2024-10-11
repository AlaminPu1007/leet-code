# 1823. Find the Winner of the Circular Game

This problem involved about, there are n friends that are playing a game. The friends are sitting in a circle and are numbered from `1 to n` in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for `1 <= i < n`, and moving clockwise from the nth friend brings you to the 1st friend.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/)

**Approach using deque :**<br/>

1. Initialize a `deque` with numbers from `1 to n`, representing the participants.
2. Use a loop to simulate the elimination process:
    - Rotate the `deque` `k-1` times to move the `k-th` participant to the front.
    - Remove the front participant from the `deque`.
3. Continue the process until only one participant is left in the `deque`.
4. Return the remaining participant as the winner.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * k)` - where `n` is the number of participants and `k` is the step count. Each elimination step involves rotating the deque k-1 times and then performing a removal.

-   Space-Complexity: `O(n)` - to store the participants in the deque.