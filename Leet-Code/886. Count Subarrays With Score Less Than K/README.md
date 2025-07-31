# 2302. Count Subarrays With Score Less Than K

This problem involved about, the score of an array is defined as the product of its sum and its length.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-subarrays-with-score-less-than-k/description)

**Key Insights :**<br/>

1. `Sliding Window Technique`: Maintain a window of elements where the product condition is satisfied.
2. `Prefix Sum Optimization`: Use a running sum to efficiently calculate `subarray` sums.
3. `Window Adjustment`: Dynamically adjust the window size to maintain the product condition.

**Algorithm Steps :**<br/>

1. `Initialize Variables`:

    - `res` to count valid `subarrays`
    - `sum` to track the current window sum
    - `l` as the left pointer of the window

2. `Expand Window`:

    - For each new element, add it to the running sum
    - While the product condition is violated, shrink the window from the left
    - Count all valid `subarrays` ending at the current position

3. `Return Result`: The accumulated count of valid `subarrays`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is the array size. Inner loop Each element is processed at most twice (added and removed once).
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces that will grow by input size.
