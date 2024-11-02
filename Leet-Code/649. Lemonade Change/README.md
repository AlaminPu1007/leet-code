# 860. Lemonade Change

This problem involved about, Aat a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/lemonade-change/description/)

**Approach :**<br/>

1. `Track the $5 and $10 Bills`:

    - Use two counters, `five` and `ten`, to track the number of $5 and $10 bills the seller has.

2. `Processing Each Bill`:

    - If the customer pays with a $5 bill, simply increment the `five` counter.
    - If the customer pays with a $10 bill, check if there's a $5 bill to give as change. If available, decrement the `five` counter and increment the `ten` counter.
    - If the customer pays with a $20 bill, prefer giving change with one $10 bill and one $5 bill if possible. If not, check if there are at least three $5 bills available. If neither option is possible, return `false`.

3. `Return `true` if Successful`:
    - If the seller can provide correct change for every customer, return `true`. Otherwise, return `false`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the number of customers. The algorithm processes each customer in constant time.
-   Space-Complexity: `O(1)` - Only a few variables are used for tracking the number of bills, so the space usage is constant.