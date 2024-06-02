## 1863. Sum of All Subset XOR Totals

This problem involved about, the XOR total of an array is defined as the bitwise XOR of all its elements, or 0 if the array is empty.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/)

### Approach for Depth search algorithm

**Approach :**<br/>

1. **Initialize Parameters**:

   - Define the size of the input array `n`.
   - Initialize a result variable `res` to store the cumulative XOR sum of all subsets.
   - Initialize a 2D vector `subsets` to store all subsets of the input array.

2. **Generate All Subsets**:

   - Call the helper function `subsetLists` with initial parameters: the `nums` array, starting index `0`, size `n`, the `subsets` vector, and an empty list to store individual subsets.
   - **Recursive Function (`subsetLists`)**:
     - **Base Case**: If the current index `i` is equal to `n`, add the current subset (`list`) to the `subsets` vector and return.
     - **Include the Current Element**: Add the current element `arr[i]` to the current subset (`list`) and recursively call `subsetLists` with the next index.
     - **Exclude the Current Element**: Remove the current element from the subset and recursively call `subsetLists` with the next index.

3. **Calculate XOR Sum**:

   - Iterate through each subset in `subsets`.
   - For each subset, compute the XOR sum of its elements.
   - Accumulate the XOR sums to `res`.

4. **Return the Result**:
   - Return the accumulated result `res`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n * 2^n)` - The algorithm generates all possible subsets, which is `2^n` in number, and for each subset, it calculates the XOR sum which takes `O(n)` time. Hence, the overall time complexity is `O(2^n * n)`.

- Space-Complexity: `O(n * 2^n)` - The space complexity is dominated by the storage of all subsets in the `subsets` vector, which can be up to `2^n` subsets, each of size up to `n`.

### Optimal Approach

**Approach :**<br/>

1. **Initialize Parameters**:

   - Define the size of the input array `n`.
   - Call the helper function `subsetLists` with initial parameters: the `nums` array, starting index `0`, size `n`, and an initial `xorSum` of `0`.

2. **Recursive Function (`subsetLists`)**:
   - **Base Case**: If the current index `i` is equal to `n`, return the current `xorSum`.
   - **Include the Current Element**: Calculate the XOR sum if the current element `arr[i]` is included in the subset and recursively call `subsetLists` with the next index.
   - **Exclude the Current Element**: Calculate the XOR sum if the current element is excluded from the subset and recursively call `subsetLists` with the next index.
   - Return the sum of results from including and excluding the current element.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(2^n)` - The algorithm explores all possible subsets, which is `2^n` in number, through recursive calls.

- Space-Complexity: `O(n)` - The space complexity is determined by the maximum depth of the recursion stack, which can go up to `n` in the worst case.