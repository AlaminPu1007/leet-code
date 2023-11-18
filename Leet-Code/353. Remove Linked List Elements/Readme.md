## 203. Remove Linked List Elements

This problem involved about, Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

# Problem description

For better problem description please visit [LeetCode Page](https://leetcode.com/problems/remove-linked-list-elements/description/)

**Approach :**<br/>

1. Initialized `dummyNode` list :
    - put `dummyNode->next = head` it will return after deletion node from list
2. initialized `prv = dummyNode` and `cur = head`
    - prv always has track of the previous element or node
    - cur always has the track of current element
3. if cur->val == value :
    - `prv->next = tempNode (copy of cur->next)`,
    - update prv = prv->next, cur = cur->next
4. return `dummyNode->next`

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n)` - iterate over the list has `O(n)` time complexity

-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces that will increase according to the given input
