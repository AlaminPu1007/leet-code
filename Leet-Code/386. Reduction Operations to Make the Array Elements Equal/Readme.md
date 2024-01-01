## 1887. Reduction Operations to Make the Array Elements Equal

This problem involved about, given an integer array `nums`, your goal is to make all elements in `nums` equal.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/description)

**Approach :**<br/>

1. The reductionOperations function begins by sorting the input vector nums in ascending order.
2. It initializes two variables: ans to keep track of the total number of operations, and count to keep track of the number of distinct elements encountered.
3. The function then iterates through the sorted array, and for each element at index i:
    - If nums[i] is not equal to the previous element (nums[i - 1]), it means a new distinct element is encountered. Increment the count variable.
    - Add the current value of count to the total number of operations ans.
4. Finally, the function returns the total number of operations.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - we are sort our root `nums` array, that has`O(n*log(n))` time compelxity
-   Space-Complexity: `O(log(n))` - sort required `O(log(n))` space complexity
