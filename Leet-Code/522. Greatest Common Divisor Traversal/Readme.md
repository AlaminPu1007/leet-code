## 2709. Greatest Common Divisor Traversal

This problem involved about, you are given a 0-indexed integer array nums, and you are allowed to traverse between its indices. You can traverse between index i and index j, i != j, if and only if gcd(nums[i], nums[j]) > 1, where gcd is the greatest common divisor.<br/>

Your task is to determine if for every pair of indices i and j in nums, where i < j, there exists a sequence of traversals that can take us from i to j.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/greatest-common-divisor-traversal/description/)

**Approach :**<br/>

1. Utilize a Union-Find data structure to keep track of the connected components. [Read more about it](https://github.com/AlaminPu1007/Data-structure-Algorithm/blob/master/DataStructure%20%26%20Algorithm/Graph/Disjoint%20Set%2C%20Union%20by%20Rank%20%2C%20Union%20by%20Size%2C%20%20Path%20Compression/Union%20by%20Size/disjoint_set.cpp)
2. Iterate through each element of the input `nums` array.
3. For each element, find its prime factors and update the Union-Find data structure accordingly.
4. If two elements share a common prime factor, union their corresponding components in the Union-Find data structure.
5. After processing all elements, if there is only one connected component in the Union-Find data structure, it implies that all pairs of elements can be traversed.

**Complexity Analysis:**<br/>

-   Time-Complexity:

    -   The time complexity mainly depends on the number of elements in the input array and the number of prime factors each element has.
    -   For each element, we need to find its prime factors, which can be done in approximately` O(sqrt(x))` time, where x is the value of the element.
    -   Considering n as the number of elements in the input array, the overall time complexity is approximately `O(n * sqrt(max_element))`.

-   Space-Complexity:
    -   The space complexity primarily depends on the Union-Find data structure and the storage of prime factors.
    -   We utilize extra space for storing prime factors in the unordered map and space for the Union-Find data structure.
    -   Considering n as the number of elements in the input array, the space complexity is` O(n)` for the Union-Find data structure and `O(sqrt(max_element))` for storing prime factors.
