## 1539. Kth Missing Positive Number

[Visit Problem](https://leetcode.com/problems/kth-missing-positive-number/description/)

**Intuition :**<br/>

-   Number of missing numbers can be calculated by comparing arr[i] and i.
-   If `arr[i] = 5` and `i = 3`, `arr = [1,2,3,5]`, we can say that `arr[i] - i - 1 = 1` numbers are missing.
-   After finding the index where `arr[i] - i > k`, add k to i `(i + k)` to find the missing number.
-   For the above mentioned example if `k = 1`, `arr[i] - i > k` at `i = 3`.
    `5 - 3 > 1`. Answer is `i + k = 3 + 1 = 4`, thus `4` is missing.

**Approach :**<br/>
We use a binary search approach for this problem since we want time complexity to be better than `O(n)`. Binary search over arr and try to find the first index where `arr[mid] - mid > k`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))`
-   Space-Complexity: `O(1)`
