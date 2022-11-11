## 1544. Make The String Great

[Open problem](https://leetcode.com/problems/make-the-string-great/)

**Approach - 1 :**<br>

-   If the size of string s is smaller than 2, return s directly.
-   Iterate over all adjacent characters in `s`.

```
    If we find a pair, remove it from s, and start over from step 2.
    Otherwise, we don't need to iterate. Move to step 3.
```

-   Return s as the final good string.

**Approach - 4:**<br>

-   Initialize two pointers `end = 0, cur = 0`.
-   Iterate over s using cur. For each character `s[cur]`.

```
    If `s[cur]` makes a pair with the `s[end]`, remove s[end] from the good string by decrement end by 1.
    Otherwise, we add s[cur] to the end of the good string by over-writting `s[end] by s[cur]` and incrementing end by 1.
```

-   Once we have finished iterating, return the first half of the string `s[:end]` as the good string.

**Complexity of Approach - 1:**<br>

-   Time complexity: `O(n^2)`
-   Space complexity: `O(n)`

**Complexity of Approach-2(recursion):**<br>

-   Time complexity: `O(n^2)`
-   Space complexity: `O(n^2)`

**Complexity of Approach-3(stack):**<br>

-   Time complexity: `O(n)`
-   Space complexity: `O(n)`

**Complexity of Approach-3(Tow-pointers approach):**<br>

-   Time complexity: `O(n)`
-   Space complexity: `O(1)`

**References :**<br>
[Learn more](https://leetcode.com/problems/make-the-string-great/solution/)
