## 1877. Minimize Maximum Pair Sum in Array

The pair sum of a pair (a,b) is equal to a + b. The maximum pair sum is the largest pair sum in a list of pairs

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description)

**Approach :**<br/>

The algorithm sorts the input array and iterates over the first half of the array, combining elements from both ends to find pairs with the maximum sum.

**Algorithm :**<br/>

1. Initialize variables: len as the size of the array, res to store the maximum pair sum, and right as the index for the end of the array.
2. Sort the array in non-decreasing order using the sort function.
3. Iterate through the first half of the array.
    - Calculate the sum of the current pair of elements (from the start and end of the sorted array).
    - Update res with the maximum of the current sum and the existing res.
    - Decrement the index from the end of the array.
4. Return the maximum sum stored in res.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting array has that much time complexity
-   Space-Complexity: `O(log(n))` - In C++ `std::sort()` function provided by STL is a hybrid of `Quick Sort`, `Heap Sort`, and `Insertion Sort` and has a worst-case space complexity of `O(log(n))`. Thus, the use of the inbuilt `sort()` function might add up to `O(log(n))` to space complexity.
