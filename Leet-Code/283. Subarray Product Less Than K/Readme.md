## 713. Subarray Product Less Than K

This problem involved about, given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/subarray-product-less-than-k/description/)

**Approach :**<br/>

-   We need sliding window technique to solve this problem. [Learn sliding window technique](https://leetcode.com/explore/featured/card/leetcodes-interview-crash-course-data-structures-and-algorithms/703/arraystrings/4502/)

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - You may be thinking: there is a while loop inside of the for loop, isn't the time complexity `O(n^2)`? The reason it is still `O(n)` is that the while loop can only iterate `n` times in total for the entire algorithm (left starts at 0, only increases, and never exceeds n). If the while loop were to run n times on one iteration of the for loop, that would mean it wouldn't run at all for all the other iterations of the for loop. This is what we refer to as amortized analysis - even though the worst case for an iteration inside the for loop is `O(n)` it averages out to `O(1)` when you consider the entire runtime of the algorithm.
-   Space-Complexity: `O(1)` - we are not using any extra space except constraints
