## 287. Find the Duplicate Number

This problem is involved about, given an array of integers `nums`, and there is only one repeated number in `nums`, return this repeated number.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/find-the-duplicate-number/description/).

**Approach :**<br/>
There are `n+1` positive numbers in the array (num) (all in the range [1,n]). Since the array only contains positive integers, we can track each number (num) that has been seen before by flipping the sign of the number located at index `∣num∣|`, where `∣∣` denotes absolute value. <br/>

-   Iterate over the array, evaluating each element (let's call the current element cur).
-   Since we use negative marking, we must ensure that the current element (cur) is positive (i.e. if cur is negative, then use its absolute value).
-   Check if `nums[cur]` is negative, If it is, then we have already performed this operation for the same number, and hence cur is the duplicate number. Store cur as the duplicate and exit the loop.
-   Otherwise, flip the sign of nums[cur] (i.e. make it negative).

-   return duplicate value
-   Once we've identified the duplicate, we could just return the duplicate number. However, even though we were not able to meet the problem constraints, we can show that we are mindful of the constraints by restoring the array. This is done by changing all negative numbers to positive.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Each element is visited at most twice (once in the first loop to find the duplicate and once in the second loop to restore the numbers).
-   Space-Complexity: `O(1)` - All manipulation is done in place, so no additional storage (barring one variable) is needed.

**References :**<br/>
For a better explanation visit the [LeetCode page](https://leetcode.com/problems/find-the-duplicate-number/editorial/)
