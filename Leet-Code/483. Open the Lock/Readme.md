## 752. Open the Lock
This problem involved about, you have a lock in front of you with 4 circular wheels. Each wheel has 10 slots: '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'. The wheels can rotate freely and wrap around: for example we can turn '9' to be '0', or '0' to be '9'. Each move consists of turning one wheel one slot. <br/>

The lock initially starts at '0000', a string representing the state of the 4 wheels.<br/>

# Problem description
For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/open-the-lock/description/)

**Approach :**<br/>

1. Create a set `deadEndsList` to store the dead ends for efficient lookup.
2. If the initial lock state "0000" is in the list of dead ends, return -1 as it's impossible to open the lock.
3. Initialize a queue `q` and push the initial lock state "0000" into it.
4. Mark "0000" as visited by inserting it into the `deadEndsList`.
5. Initialize a variable `count` to keep track of the number of turns.
6. While the queue is not empty:
   - Iterate through each lock state in the queue:
     - If the current lock state equals the target, return the count.
     - For each digit in the lock state:
       - Calculate the lock state by incrementing and decrementing the digit (wrapping around if necessary).
       - If the resulting lock state is not in the `deadEndsList`, push it into the queue and mark it as visited.
   - Increment the count for each level of iteration.
7. If the target is not found after the loop, return -1.

**Complexity Analysis :**<br/>
- Time-Complexity: `O(n)` - The time complexity of the BFS algorithm is `O(10^4) = O(n)`, as there are `10^4` possible lock states, and we visit each state at most once.

- Space-Complexity: `O(n)` - The space complexity is `O(10^4) = O(n)` as well, since we are storing the visited lock states in the set and the queue.



