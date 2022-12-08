## 1673. Find the Most Competitive Subsequence

[Visit problem](https://leetcode.com/problems/find-the-most-competitive-subsequence/)

**Approach :**<br>

-   By taking a close look at the following test cases, we can understand the problem better:
    Consider : <br>

```
[3, 5, 2, 6] and k = 2
Answer = [2, 6]

[3, 5, 2, 6] and k = 3
Answer = [3, 2, 6]
```

In the first case, our answer began with 2 which was the smallest number available in the array. However, in the second case we could not start our answer with 2 as we need a total of `k = 3` numbers in the answer. Thus we begin our answer with the smallest number we can find, which also has enough numbers after it to contribute to the final answer.<br>

**Complexity Analysis :**<br>

At each steps I can remove maximum of k elements, but once I have removed all k elements, it would take k steps to add the k elements and then in the next step I would spend k time to remove those: for example:<br>

```
k= 3
[100,100,100,99,100,100,98,100,100, 97]

so complexity will be something like 2n
```

-   Time-Complexity :`O(2n) is O(n)`
-   space-Complexity: `O(k)` // size of k
