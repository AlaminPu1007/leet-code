## 1457. Pseudo-Palindromic Paths in a Binary Tree

This problem involved about, given a binary tree where node values are digits from 1 to 9. A path in the binary tree is said to be pseudo-palindromic if at least one permutation of the node values in the path is a palindrome. <br/>

Return the number of pseudo-palindromic paths going from the root node to leaf nodes.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/description/)

**Example:**

-   Given the binary tree:
    ```
          2
         / \
        3   1
       / \   \
      3   1   1
    ```
    The output is 2, representing the two pseudo-palindromic paths: 2 -> 1 -> 3 and 2 -> 1 -> 1.

**Approach :**<br/>

1. Initialization:

    - The `Solution` class provides a method `pseudoPalindromicPaths` to count the number of pseudo-palindromic paths in a binary tree.

2. Algorithm (`pseudoPalindromicPaths`):

    - The method takes a `TreeNode` root as input.
    - Use Depth First Search (DFS) to traverse the binary tree.
    - Maintain a frequency map (`freq`) to count the occurrence of each number in the path.
    - When reaching a leaf node, check if the path is pseudo-palindromic by counting the odd occurrences of numbers.
    - If the path is pseudo-palindromic, increment the result.

3. Result:
    - The method returns an integer representing the number of pseudo-palindromic paths in the given binary tree.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm traverses each node once, resulting in O(N) time complexity, where N is the number of nodes in the binary tree.
-   Space-Complexity: `O(h)` - The space complexity is O(H) for the recursive call stack, where H is the height of the binary tree.
