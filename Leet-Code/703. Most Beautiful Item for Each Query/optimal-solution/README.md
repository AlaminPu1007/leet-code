# 2070. Most Beautiful Item for Each Query

This problem involved about, you are given a 2D integer array items where `items[i] = [pricei, beautyi]` denotes the price and beauty of an item respectively.

You are also given a 0-indexed integer array queries. For each `queries[j]`, you want to determine the maximum beauty of an item whose price is less than or equal to queries[j]. If no such item exists, then the answer to this query is 0.

## Problem description

For better problem description, please visit [LeetCode page](https://leetcode.com/problems/most-beautiful-item-for-each-query/description/)

**Approach :**<br/>

1. `Sort the Items by Price`:

    - First, sort `items` by their price in ascending order. This allows us to consider items in order of increasing price, which optimizes our search for the maximum beauty at each query price.

2. `Pair Queries with Their Indices`:

    - Create a vector `q` of pairs, where each pair contains a query price and its original index. Sorting queries with their indices allows us to generate the result in the correct order after processing.

3. `Sort Queries by Price`:

    - Sort the query pairs by price to efficiently compute the maximum beauty for each query by iterating over sorted items.

4. `Two-Pointer Technique`:
    - Initialize a pointer `j` to iterate over the sorted `items` array and a variable `max_bea` to track the highest beauty encountered.
    - For each query in sorted order:
        - Move pointer `j` over `items` while `items[j][0] <= query_price`. For each item satisfying this condition, update `max_bea` to the maximum beauty found so far.
        - Store `max_bea` at the original index of the current query.
5. `Return Results`:
    - The result vector contains the maximum beauty for each query price in the order of the original `queries`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O((n + m) * log(n))` - Sorting `items` and `queries` takes `O(n log n + m log m)`, and iterating over `items` and `queries` takes `O(n + m)`.

-   Space-Complexity: `O(n)` - Space for the result vector and temporary `q` vector to store the original indices of queries.
