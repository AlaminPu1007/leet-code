## 456. 132 Pattern

This problem involved about, given an array of n integers `nums`, a 132 pattern is a subsequence of three integers `nums[i], nums[j] and nums[k]` such that `i < j < k `and` nums[i] < nums[k] < nums[j]`. Return true if there is a 132 pattern in nums, otherwise, return false.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/132-pattern/description)

**Approach :**<br/>

-   Initialize stack data structure to hold monotonically decreasing value with previous minimum value
-   Iterate over the `nums` array and check `nums[i]` is greater than to previous top item from the stack :
    1. if stack top most item is greater than stack, pop element from stack until satisfied this condition `!st.empty() && st.top().first < nums[i]`
-   Then check after found `k` element from nums array with this `!st.empty() && st.top().first > nums[i] && st.top().second < nums[i]` and return true
-   push each item into stack with previous minimum value
-   return `false`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - iterate over the array that may cause to `O(n)` time complexity. `pop` and `push` from stack operation has `O(1)` time complexity.
-   Space-Complexity: `O(n)` - we are using an additional stack data structure
