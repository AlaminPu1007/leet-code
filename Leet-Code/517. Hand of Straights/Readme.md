# 846. Hand of Straights

This problem involved about, alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/hand-of-straights/description/)

**Approach :**<br/>

1. **Initialization**:

    - Calculate the size `n` of the hand.
    - If `n` is not divisible by `groupSize`, return `false` as it's not possible to form groups.
    - Create an unordered map `frq` to count the frequency of each card.
    - Create a min-heap `pq` to store the unique card values in increasing order.

2. **Count Frequencies**:

    - Iterate through the hand and populate the frequency map `frq`.

3. **Populate Min-Heap**:

    - Iterate through the frequency map and push each unique card value into the min-heap `pq`.

4. **Form Groups**:

    - While the min-heap is not empty:
        - Get the smallest card value `value` from the min-heap.
        - Try to form a group starting with `value`:
            - For each card in the group (`value + i` for `i` from `0` to `groupSize - 1`):
                - If the card is not in the frequency map or its frequency is zero, return `false`.
                - Decrement the card's frequency.
                - If the frequency becomes zero and the card is not the current smallest card in the heap, return `false`.
                - If the frequency becomes zero and the card is the current smallest card, pop it from the heap.

5. **Return Result**:

    - If all groups are successfully formed, return `true`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - Inserting all unique cards into the min-heap takes `O(n log(n))`, where `n` is the number of unique cards.

-   Space-Complexity: `O(n)` - The frequency map and the min-heap both store up to `n` elements in the worst case.