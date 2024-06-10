## 950. Reveal Cards In Increasing Order

This problem involved about, you are given an integer array deck. There is a deck of cards where every card has a unique integer. The integer on the ith card is deck[i]. <br/>

You can order the deck in any order you want. Initially, all the cards start face down (unrevealed) in one deck. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/reveal-cards-in-increasing-order/description/)

**Approach :**<br/>

1. `Sort the Deck`: Sort the given deck of cards in increasing order.

2. `Initialize Queue`: Initialize a queue with indices from \(0\) to \(n-1\), where \(n\) is the size of the deck.

3. `Reveal Cards`: Iterate through the sorted deck:

    - For each card, reveal it by:
        - Removing the front index from the queue.
        - Assigning the current card to the index removed from the queue.
        - If there are more indices in the queue:
            - Skip the next index by adding it to the end of the queue.

4. `Return Revealed Deck`: After revealing all cards, return the revealed deck.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n*log(n))` - Sorting the deck
-   Space-Complexity: `O(n)` - The algorithm uses extra space for the resulting revealed deck and the queue.
