## Maximum Ice Cream Bars

[Open Problem](https://leetcode.com/problems/maximum-ice-cream-bars/description/)

**Approach :**<br>

-   Sort the costs array in ascending order.

-Initialize variables:

```
n, length of the input array.
icecream, integer to denote the index of current ice cream.
```

-   While there is an ice cream left and we have enough coins to buy it:

```
Reduce the cost of current ice cream from our coins.
Increment icecream by 1 to move on to the next ice cream.
```

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n*log(n))`
-   Space-Complexity: `O(log(n))`
    In `C++` and Swift, the `sort()` function is implemented as a hybrid of Quick Sort, Heap Sort, and Insertion Sort, with a worst-case space complexity of `O(log(n))`.

    [References](https://leetcode.com/problems/maximum-ice-cream-bars/solutions/2885725/maximum-ice-cream-bars/)
