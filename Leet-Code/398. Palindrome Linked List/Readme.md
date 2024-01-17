## 234. Palindrome Linked List

This problem involved about, Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/palindrome-linked-list/description/)

**Approach :**<br/>

-   First get middle of the linked list by using `first & slow` pointer approach
-   After find middle of the list, then reverse right portion of the list
-   Now compare reverse list with head left or first portion and so on

**complexity Analysis :**<br/>

-   Time-Complexity:`O(n/2) + O(n/2) + O(n/2)` - To find middle of the linked list hast `O(n/2)` times, and then reverse & check palindrome also has `O(n/2)` time complexity
-   Space-Complexity: `O(1)` - we are not using any extra spaces
