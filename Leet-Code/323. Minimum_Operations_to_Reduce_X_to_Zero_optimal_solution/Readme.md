## 1658. Minimum Operations to Reduce X to Zero

This problem involved about, You are given an integer array nums and an integer x. In one operation, you can either remove the leftmost or the rightmost element from the array nums and subtract its value from x. Note that this modifies the array for future operations.

Return the minimum number of operations to reduce x to exactly 0 if it is possible, otherwise, return -1.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/description)

**Approach :**<br/>
This C++ solution defines a Solution class with a minOperations function. The idea behind this solution is to calculate the prefix sum of the nums array and use a hash map (unordered_map) to store the positions of prefix sums. We initialize the map with a key of 0 and a value of -1 to handle cases where the subarray starts from the beginning of the array.

We then iterate through the nums array, calculating the running sum and checking if a subarray with a sum of x can be obtained. To do this, we calculate the remainingSum by subtracting x from the total sum of the array. We then iterate through the array, and for each position, we calculate the value that needs to be found in the hash map to reach x. If we find such a value in the hash map, we update the result with the maximum length of the subarray that ends at the current position.

Finally, we return the result, which represents the minimum number of operations to obtain a subarray with a sum of x.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - we iterate over the array and calculate total sum of that given array, it has `O(n)` times complexity. Find longest subarray that also has `O(n)` times. the overall complexity is `O(n)`
-   Space-Complexity: `O(n)` - we are using an extra additional spaces to store sum with index
