# 773. Sliding Puzzle

This problem involved about, on an `2 x 3` board, there are five tiles labeled from `1 to 5`, and an empty square represented by 0. A move consists of choosing 0 and a 4-directionally adjacent number and swapping it.

## Problem description

For better problem description, please visit [LeetCode page](https://leetcode.com/problems/sliding-puzzle/description/)

**Approach :**<br/>

1. `Breadth-First Search (BFS)`:

    - This approach uses BFS to explore all possible configurations of the puzzle.
    - Each state is represented as a string to make it easier to track visited states.

2. `State Representation`:

    - The board is represented as a string where the numbers are concatenated (e.g., `123450`).

3. `Neighbor Swaps`:

    - A predefined set of directions determines how the blank space (`0`) can move based on its position in the 2x3 grid.

**Algorithm :**<br/>

1. `Initialization`:

    - Convert the initial board configuration into a string.
    - Define a `target` string (`"123450"`) representing the desired configuration.
    - Use a queue to store states in BFS and a hash map to track visited states.

2. `BFS Execution`:

    - Start with the initial configuration and perform swaps to generate new configurations.
    - For each new configuration:
        - Check if it matches the target.
        - If unvisited, mark it visited and add it to the queue with an incremented move count.

3. `Early Termination`:
    - Stop once the target configuration is reached.
    - If the queue is exhausted without finding the target, return `-1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O((m⋅n)! * (m⋅n))` - The algorithm uses Breadth-First Search (BFS) to explore all possible board configurations. With `(m⋅n)!` unique configurations, BFS may process each configuration once. Each configuration requires checking moves and generating new ones, taking `O(m⋅n)` operations.
-   Space-Complexity: `O((m⋅n)!` - The space complexity is determined by the visited set and the BFS queue.
