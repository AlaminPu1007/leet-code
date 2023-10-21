## 61. Rotate List

This problem involved about, Given the head of a linked list, rotate the list to the right by k places.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/rotate-list/description/)

**Approach :**<br/>

1. We need to find out the length of given list & make given list from singly linked list to circular linked list
2. The update `k` value by using module by it from `list` length & found it updated node using `k = length - (k % length)`
3. Now iterate over the list until k become to 0:
    - update `head = temp->next` & `temp->next = NULL`
4. return head

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n) + O(n - k) = O(n)` - We iterate over the list and count length has `O(n)` time complexity. Then we iterate over the list in `k` times that has `O(n-k)` time complexity
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces, except constant spaces
