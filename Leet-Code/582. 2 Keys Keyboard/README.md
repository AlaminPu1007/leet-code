# 650. 2 Keys Keyboard

This problem involved about, There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step<br/>

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/2-keys-keyboard/description/)

**Approach :**<br/>

1. `Depth-First Search (DFS)`:

    - We start with a single character on the notepad.
    - The first operation must be a "Copy All" operation, which copies all the current characters.
    - From here, we recursively explore two possible operations:
        - `Copy All and Paste`: This operation costs 2 (1 for the copy and 1 for the paste). It doubles the current length of characters.
        - `Only Paste`: This operation costs 1 and pastes the previously copied characters, increasing the current length by the size of the copied text.
    - We continue this process until we reach exactly `n` characters or surpass `n`.

2. `Base Cases`:

    - If the current length matches `n`, we return 0 since no further operations are needed.
    - If the current length exceeds `n`, return a large number (`10000` in this case) to indicate an invalid path.

3. `Final Result`:
    - The minimum of the two possible operations (Copy + Paste vs. Only Paste) is returned.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2 ^ n)` - function is recursively called 2 times at each point. The maximum height of the call stack would be `n`, leading to a total exponential time complexity of `O(2^n)`.
-   Space-Complexity: `O(n)` - The space complexity is determined by the call stack, which has a maximum height of `O(n)`.