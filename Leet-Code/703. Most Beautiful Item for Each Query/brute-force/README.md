# 2070. Most Beautiful Item for Each Query

This problem involved about, you are given a 2D integer array items where `items[i] = [pricei, beautyi]` denotes the price and beauty of an item respectively.

You are also given a 0-indexed integer array queries. For each `queries[j]`, you want to determine the maximum beauty of an item whose price is less than or equal to queries[j]. If no such item exists, then the answer to this query is 0.

## Problem description

For better problem description, please visit [LeetCode page](https://leetcode.com/problems/most-beautiful-item-for-each-query/description/)

**Approach :**<br/>

This solution uses a `brute-force` approach to determine the maximum beauty for each query:

1. `Iterate Over Each Query`:
    - For each query price, initialize a variable `maxItem` to keep track of the highest beauty found for items with a price less than or equal to the current query price.
2. `Iterate Over Items`:
    - For each item, check if its price is less than or equal to the query price.
    - If so, update `maxItem` to the maximum of `maxItem` and the item's beauty.
3. `Store Results`:
    - After iterating through all items for a given query, add `maxItem` to the result list.
4. `Return Result`:
    - The final result vector contains the maximum beauty for each query price in the order of the original `queries`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O((n * q)` - where `q` is the number of queries and `n` is the number of items. This is because, for each query, the algorithm iterates over all items.

-   Space-Complexity: `O(n)` - as we store a result for each query.
