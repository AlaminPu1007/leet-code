## 209. Minimum Size Subarray Sum

This problem involved about, given an array of positive integers nums and a positive integer target, return the minimal length of a
subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-size-subarray-sum/description/)

**Algorithm :**<br/>

1. Create three integer variables left, right and sumOfCurrentWindow. The variables left and right form a subarray by pointing to the starting and ending indices of the current subarray (or window), and sumOfCurrentWindow stores the sum of this window. Intialize all of them with 0
2. Create another variable res to store the answer to the problem. We initialize it to a large integer value.
3. We iterate over nums using right starting from right = 0 till nums.length - 1 incrementing right by 1 after each iteration. We perform the following inside this iteration:

    - Add element at index right to the current window, incrementing sumOfCurrentWindow by nums[right].
    - We check if sumOfCurrentWindow >= target. If so, we have a subarray that satisfies our condition. As a result, we attempt to update our answer variable with the length of this subarray. We perform res = min(res, right - left + 1). We then remove the first element from this window by reducing sumOfCurrentWindow by nums[left] and incrementing left by 1. This step is repeated in an inner loop as long as sumOfCurrentWindow >= target.
    - The current window's sum is now smaller than target. We need to add more elements to it. As a result, right is incremented by 1.

4. return res.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - You may be thinking: there is an inner while loop inside another for loop, isn't the time complexity
    `O(n^2)`? The reason it is still `O(n)` is because the right pointer right can move nnn times and the left pointer left can move also `n` times in total. The inner loop is not running nnn times for each iteration of the outer loop. A sliding window guarantees a maximum of `2n` window iterations. This is what is referred to as amortized analysis - even though the worst case for an iteration inside the for loop is `O(n)`, it averages out to `O(1)` when you consider the entire runtime of the algorithm.
-   Space-Complexity: `O(1)` - We are not using any extra space other than an using few integer left, right, `sumOfElements`, and res, which takes up constant space each.
