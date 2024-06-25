## 1669. Merge In Between Linked Lists

This problem involved about, you are given two linked lists: list1 and list2 of sizes n and m respectively.

Remove list1's nodes from the ath node to the bth node, and put list2 in their place.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/merge-in-between-linked-lists/description)

**Approach :**<br/>

1. Initialize a variable `i` to 1 and a pointer `sudoHead` to the head of `list1`.
2. Traverse `list1` until reaching the node before the `a`th node (i.e., traverse `i` nodes).
3. Set a temporary pointer `temp` to the current `sudoHead`.
4. Continue traversing `list1` until reaching the `b`th node (i.e., traverse `b - a + 1` nodes).
5. Set the `next` pointer of `temp` to `list2`, effectively inserting `list2` between the `a`th and `b`th nodes.
6. Traverse `list2` until reaching its last node.
7. Set the `next` pointer of the last node of `list2` to the node following the `b`th node in `list1`.
8. Return the head of the modified `list1`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n) + O(n)`
    -   Traversing `list1` until the `a`th node takes O(a) time.
    -   Traversing `list1` until the `b`th node takes O(b - a) time.
    -   Traversing `list2` to its last node takes O(c), where c is the number of nodes in `list2`.
    -   Therefore, the overall time complexity is O(a + b + c).
-   Space-Complexity: `O(1)`
