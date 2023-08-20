## 1502. Can Make Arithmetic Progression From Sequence

This problem is involved about, A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

**Problem Description :**<br/>
For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/)

**Approach :**<br/>

-   Sort arr.
-   Record the first pair difference `diff = arr[1] - arr[0]`
-   Iterate over the sorted arr from `i = 2`, check if every pair difference equals diff, return `False` if not
-   Return True when the iteration ends

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(n))` - since we are sorting the array, it will takes `O(n*log⁡n)` time on average.
-   Space-Complexity: `O(log(n))` - In C++, the `sort()` function is implemented as a hybrid of `Quick Sort`, `Heap Sort`, and `Insertion Sort`, with worst-case space complexity of `O(log⁡n)`
