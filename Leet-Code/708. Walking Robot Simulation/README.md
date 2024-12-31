# 874. Walking Robot Simulation

This problem involved about, A robot on an infinite XY-plane starts at point (0, 0) facing north. The robot can receive a sequence of these three possible types of commands:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/walking-robot-simulation/description)

**Approach :**<br/>

1. `Direction Handling:`

    - Use a direction vector to represent the four possible directions: north, east, south, and west.
    - The robot can turn left (rotate counter-clockwise) or right (rotate clockwise) based on the commands.

2. `Obstacle Handling:`

    - Store the obstacles in a set, allowing for `O(1)` lookup time to check if a position is blocked.

3. `Simulation:`
    - Start the robot at the origin `(0, 0)` facing north.
    - Iterate through the list of commands:
        - Adjust the robot's direction when encountering turn commands (`-1` for right, `-2` for left).
        - Move the robot forward in its current direction until it encounters an obstacle or completes the specified number of steps.
    - After processing all commands, calculate the maximum distance squared from the origin.

### Algorithm

1. Parse the obstacles and store them in a set for efficient lookups.
2. Initialize the robot's position `(x, y)` and the direction `d`.
3. Loop through each command in the input list:
    - If the command is `-1`, turn the robot right by updating the direction.
    - If the command is `-2`, turn the robot left by updating the direction.
    - If the command is a positive integer, move the robot forward in the current direction. For each step, check if the new position is an obstacle. If it is, stop moving in that direction.
    - Update the maximum distance squared from the origin after each move.
4. Return the maximum distance squared after processing all commands.

**Complexity Analysis :**<br/>

-   Time Complexity: `O(n + m)`, where `n` is the number of commands and `m` is the number of obstacles.
-   Space-Complexity: `O(m)` - where `m` is the number of obstacles