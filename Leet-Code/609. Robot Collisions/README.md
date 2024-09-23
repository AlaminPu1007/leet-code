# 2751. Robot Collisions

This problem involved about, there are n 1-indexed robots, each having a position on a line, health, and movement direction. <br/>

You are given 0-indexed integer arrays positions, healths, and a string directions (directions[i] is either 'L' for left or 'R' for right). All integers in positions are unique.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/robot-collisions/description/)

**Approach :**<br/>

The problem is to simulate the collisions between robots moving on a 1D plane and determine the health of the surviving robots. The robots can move either to the left ('L') or to the right ('R'). Robots collide if they meet each other, and in a collision, the robot with the higher health continues with its health decreased by one, while the other robot is destroyed. If both robots have the same health, they both are destroyed.

**Algorithm :**<br/>

1. **Initialization**:

    - Create a stack to keep track of robots that are moving to the right ('R').
    - Use a map to sort the robots by their positions, ensuring we process robots in order from left to right.

2. **Processing the Robots**:

    - Iterate through the robots sorted by position.
    - For each robot:
        1. If it is moving to the right ('R'), push its index onto the stack.
        2. If it is moving to the left ('L'):
            - Check for collisions with robots in the stack (which are all moving to the right).
            - Resolve collisions based on the health of the colliding robots:
                1. If the current robot's health is higher, decrease its health by one and destroy the robot from the stack.
                2. If the current robot's health is lower, destroy the current robot and decrease the health of the robot from the stack by one.
                3. If both have the same health, destroy both robots.
            - If the current robot survives all collisions, push its index onto the stack.

3. **Collecting the Results**:
    - After processing all robots, collect the healths of the surviving robots (those with non-zero health).

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - due to sorting the robots by position and processing each robot.

-   Space-Complexity: `O(n)` - for the stack and the map used to keep track of the robots.