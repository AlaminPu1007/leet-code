## 2024. Maximize the Confusion of an Exam

This problem involved about, You are given a string answerKey, where answerKey[i] is the original answer to the ith question. In addition, you are given an integer k, the maximum number of times you may perform the following operation

# Problem description

For better explanation of problem, please visit [LeetCode Pages](https://leetcode.com/problems/maximize-the-confusion-of-an-exam/description/)

**Algorithm :**<br/>

1. Use a hash map count to record the count of T and F in the current window.
2. Set left = 0 and max_size = 0, iterate right from 0 to n - 1, at each step right, increment answerKey[right] by 1:
    - Increment count[answerKey[right]] by 1.
    - While min(count['T'], count['F']) > k, decrement count[answerKey[left]] by 1 and increment left by 1
    - Now the window is valid, update the maximum size of valid window as max_size = max(max_size, right - left + 1).
3. Return max_size when the iteration ends.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - In the iteration of the right boundary right, we shift it from 0 to n - 1. Although we may move the left boundary left in each step, left always stays to the left of right, which means left moves at most n - 1 times.
-   Space-Complexity: `O(1)` - We only need to update two indices left and right. During the iteration, we need to count the number of T and F, which also takes `O(1)` space.
