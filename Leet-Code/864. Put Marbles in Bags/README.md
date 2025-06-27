# 2551. Put Marbles in Bags

This problem involved about, you have k bags. You are given a 0-indexed integer array weights where weights[i] is the weight of the ith marble. You are also given the integer k.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/put-marbles-in-bags/description)

**Key Insights :**<br/>

1. `Cost Calculation`: The total cost is the sum of the first and last marble in each bag. This means the split points between bags contribute to the cost.
2. `Split Points`: When you split the marbles into `k` bags, you create `k-1` split points. Each split point between bags `i` and `i+1` contributes `weights[i] + weights[i+1]` to the total cost.
3. `Minimization and Maximization`: To find the difference between the maximum and minimum possible costs, we need to consider the largest and smallest `k-1` split point values.

**Algorithm Steps :**<br/>

1. `Compute Split Costs`: Calculate the cost of each possible split point, which is the sum of adjacent marbles.
2. `Sort Split Costs`: Sort these split costs to easily access the largest and smallest values.
3. `Calculate Total Costs`: The maximum total cost is the sum of the largest `k-1` split costs plus the sum of the first and last marble in the entire array. The minimum total cost is the sum of the smallest `k-1` split costs plus the same endpoints.
4. `Return the Difference`: Subtract the minimum total cost from the maximum total cost to get the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - The first loop iterates over the weights array to compute the pairWeights array, which takes `O(n)` time. Sorting the pairWeights array takes `O(n * log(n))` time.
-   Space-Complexity: `O(n)` - The pairWeights array stores n−1 elements, which requires `O(n)` space.
