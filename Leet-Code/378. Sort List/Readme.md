## 148. Sort List

This problem involved about, given the head of a linked list, return the list after sorting it in ascending order.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/sort-list/description/)

**Approach :**<br/>

-   `sortList Function`

    1. If the linked list is empty or has only one element, return the head.<br/>
    2. Get the middle of the linked list using the middleOfTheList function.<br/>
    3. Split the linked list into two halves.
    4. Recursively sort the left and right halves using the sortList function.
    5. Merge the sorted left and right halves using the mergeList function.
    6. Return the merged list.

-   `middleOfTheList Function:`

    1. Use the "slow and fast pointer" technique to find the middle of the linked list.
    2. Return the middle node

-   `mergeList Function:`

    1. Merge two sorted linked lists into a single sorted linked list.
    2. Initialize a dummy node and a tail pointer.
    3. Iterate through both lists, comparing elements and appending the smaller one to the merged list.
    4. Connect the remaining elements if any.
    5. Return the merged list.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - we are using an merge sort algorithm, that has required `O(n*log(n))` time complexity
-   Space-Complexity: `O(log(n))` - where n is the number of nodes in the linked list. This is due to the recursive call stack during the sorting process
