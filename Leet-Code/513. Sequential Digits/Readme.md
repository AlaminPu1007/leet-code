## 1291. Sequential Digits

This problem involved about, An integer has sequential digits if and only if each digit in the number is one more than the previous digit. <br/>
Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/sequential-digits/description/)

**Approach :**<br/>

1. Initialize an empty vector `ans` to store the sequential digits.
2. Initialize a queue `q` and enqueue the digits from 1 to 9.
3. Perform a breadth-first search:
    - Pop the front element `n` from the queue.
    - If `n` is greater than the `high` limit, skip to the next iteration.
    - Check if `n` is within the specified range `[low, high]`. If yes, add it to the `ans` vector.
    - Extract the ones place digit (`ones`) from `n`.
    - If `ones` is less than 9, enqueue the new element `(n * 10) + (ones + 1)`.
4. Return the final vector `ans` containing sequential digits.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` - The time complexity is `O(1)` since the maximum range is fixed (10^9), and the number of iterations is limited.

-   Space-Complexity: `O(1)` - The space complexity is `O(1)` as the size of the output vector is not dependent on the input size.
