### Node Structure

Each node has:

-   A start time (`s`)
-   An end time (`e`)
-   Two children: left and right, which represent intervals less than the current node (for the left child) and greater than the current node (for the right child), respectively.

### Insertion Logic

1. **Right Subtree**:
    - If the new event's start time (`s`) is greater than or equal to the current node's end time (`e`), we attempt to insert the new event in the right subtree.
2. **Left Subtree**:
    - If the new event's end time (`e`) is less than or equal to the current node's start time (`s`), we attempt to insert the new event in the left subtree.
3. **Conflict**:
    - If the new event overlaps with the current node (i.e., the current node's start or end time conflicts with the new event), the insertion fails, as it would cause a scheduling conflict.

The algorithm continues traversing the tree recursively or iteratively until it finds an appropriate spot or determines that the new event cannot be inserted.

---

## Algorithm

### Approach:

1. If the tree is empty, insert the new event as the root node.
2. Otherwise, traverse the tree starting from the root.
3. For each node:
    - If the new event's start time is greater than or equal to the current node's end time, move to the right child.
    - If the new event's end time is less than or equal to the current node's start time, move to the left child.
    - If there is an overlap, return `false` indicating a conflict.
4. If an empty spot (null child) is found, insert the new event at that position.

### Time Complexity:

-   **Best Case (Balanced Tree)**: `O(log n)`
    -   In a balanced binary tree, the height is `log n`, so the algorithm will take logarithmic time to traverse and insert the node.
-   **Worst Case (Skewed Tree)**: `O(n)`
    -   In a skewed binary tree (i.e., all nodes have only one child), the height becomes `n`, resulting in linear time for traversal and insertion.

### Space Complexity:

-   **Auxiliary Space**: `O(1)` for iterative traversal.
-   **Recursive Depth (if implemented recursively)**: `O(n)` in the worst case for the recursion stack.

---

## Steps

1. **Initialization**:
    - Create a root node when the first event is inserted.
2. **Tree Traversal**:
    - If the tree is non-empty, compare the new event's start and end times with the current node.
    - Move to the left child if the new event can be placed before the current node's interval, or move to the right child if it comes after.
3. **Insertion**:
    - When an appropriate position is found (i.e., a null child), insert the new node.
4. **Conflict Detection**:
    - If the new event overlaps with the current node, the insertion fails, and the event is not added.

---

## Example:

### Inserting Events:

1. **Insert Event (10, 20)**:
    - Since the tree is empty, this becomes the root node.
2. **Insert Event (5, 10)**:
    - This event ends before the root node starts, so it will be inserted in the left subtree of the root.
3. **Insert Event (20, 30)**:
    - This event starts after the root node ends, so it will be inserted in the right subtree of the root.

### Conflict Case:

-   **Insert Event (15, 25)**:
    -   This event overlaps with the root node (10, 20), so the insertion will fail, returning `false`.

---

## Time & Space Complexity Summary

-   **Time Complexity**:
    -   Best case: `O(log n)` for a balanced tree.
    -   Worst case: `O(n)` for a skewed tree.
-   **Space Complexity**:
    -   Iterative: `O(1)` auxiliary space.
    -   Recursive (optional): `O(n)` in the worst case due to recursion depth.

---

## Conclusion

This approach provides a clean way to manage event scheduling using a binary search tree. It efficiently prevents conflicts, but performance depends heavily on the balance of the tree. A self-balancing binary tree (e.g., AVL tree) could be implemented to optimize the worst-case scenario.