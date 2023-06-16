## 228. Summary Ranges

This problem involved about, You are given a sorted unique integer array nums. Return the smallest sorted list of ranges that cover all the numbers in the array exactly.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/summary-ranges/description/)

**Algorithm :**<br/>

1. Create a list of strings ranges that contain the solution to the problem
2. Iterate over all the elements in nums with the pointer `i = 0` :

-   Each iteration of the outermost loop represents finding one range. To start, save the current range's beginning in `start = nums[i]`
-   Check whether the next element in nums at index i + 1 differs from nums[i] by 1 or more. If the next element differs by 1, we increase i by 1 to include the `(i+1)th`, element in this range and move ahead to check the next element. We keep adding elements in this range until the successive elements differ by 1. We can use a while loop to accomplish this logic.
-   Otherwise, if the next element differs by more than 1 or we have covered all the elements in nums, we check whether start is equal to `nums[i]` or not. If `start == nums[i]`, we only add start as a string to ranges as we just have a single element in this range. Otherwise, if start != nums[i], we add the string `start->nums[i]` to ranges
-   We increment i by 1 to start a new range.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)`- We iterate over each nums element once, either including it in the current range or creating a new range from it, which takes `O(n)` time for `n` elements. We also add all of the ranges to the ranges list. In the worst-case situation, `n` elements could be added to the list if each consecutive element in nums differs by more than 1, requiring `O(n)` time to insert all the required ranges
-   Space complexity: `O(1)` - Except for a few integer variables like i and start that use constant space, we do not consume any space (if we ignore the space consumed by the input and output)

**References :**<br/>
For a better solution description, please visit the [LeetCode Solution page](https://leetcode.com/problems/summary-ranges/editorial/)
