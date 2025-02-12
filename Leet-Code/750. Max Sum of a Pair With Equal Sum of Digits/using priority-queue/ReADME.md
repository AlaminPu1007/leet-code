# 2342. Max Sum of a Pair With Equal Sum of Digits

This problem involved about, you are given a 0-indexed array `nums` consisting of positive integers. You can choose two indices `i and j`, such that `i != j`, and the sum of digits of the number `nums[i]` is equal to that of `nums[j]`

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description)

**Approach :**<br/>

1. `Calculate the Digit Sum`:

    - Define a helper function `digitSum(int num)` to compute the sum of digits of a number.
    - Example: `digitSum(999999999) = 9+9+9+9+9+9+9+9+9 = 81`.

2. `Use a Min-Heap to Track Top Two Values`:

    - Since the maximum digit sum possible (for numbers ≤ `10^9`) is `81`, maintain an array of `min-heaps` (`priority_queue<int, vector<int>, greater<>>`) for each digit sum.
    - Each heap stores `at most two` numbers (largest two values for that digit sum).

3. `Iterate Through `nums``:

    - Compute `digitSum` for each number and insert it into the corresponding heap.
    - If a heap contains more than two elements, `remove the smallest`.

4. `Compute the Maximum Sum`:
    - Iterate through the `digitGroups` array.
    - If a heap has exactly `two` elements, pop both and compute their sum.
    - Track the maximum sum.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(k))` - where `n` is the size of `nums` and `k` is the maximum number of elements in a min-heap (here, `k = 2`)
-   Space-Complexity: `O(n)` - due to the vector of min-heaps storing up to `n` numbers.
