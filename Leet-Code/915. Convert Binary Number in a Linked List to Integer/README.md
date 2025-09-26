# 1290. Convert Binary Number in a Linked List to Integer

This problem involved about, given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/)

**Key Insights :**<br/>

1. `Bit Manipulation`: Efficient conversion using bit shifting operations
2. `Linear Traversal`: Process each node exactly once
3. `Accumulation`: Build the decimal value incrementally as we traverse the list

**Algorithm Steps :**<br/>

1. `Initialize Result`: Start with decimal value 0
2. `Traverse Linked List`:
    - For each node, shift the current result left by 1 bit (equivalent to multiplying by 2)
    - OR the current node's value with the result (equivalent to adding the bit)
3. `Return Result`: Final accumulated decimal value

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where n is number of nodes.
-   Space-Complexity: `O(1)` - We are not using any kind of extra spaces that will grow by input size.
