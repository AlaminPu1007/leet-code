## 1658. Minimum Operations to Reduce X to Zero

This problem involved about, you are given an integer array nums and an integer x. In one operation, you can either remove the leftmost or the rightmost element from the array nums and subtract its value from x. Note that this modifies the array for future operations.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/description/)

**Approach :**<br/>

1. Calculate the total sum of the array 'nums'.
2. Create an unordered map 'Map', initializing it with key-value pair '0' and '-1' (indicating prefix sum '0' at index '-1').
3. Iterate through the array 'nums' to compute prefix sums and store their indices in 'Map'.
4. If the total sum is less than the target 'x', return '-1' indicating no possible solution.
5. Compute the 'remainingSum' required to reach 'x' from the total sum.
6. Iterate through 'nums' to calculate the prefix sum 'sum' and find if 'sum - remainingSum' exists in 'Map'.
7. Update 'res' with the maximum subarray length that satisfies the condition.
8. Return the minimum number of operations required, accounting for the subarray length or '-1' if no valid subarray is found.

**complexity Analysis :**<br/>

-   Time-Complexity:`O(n)`
-   Space-Complexity: `O(n)` 
