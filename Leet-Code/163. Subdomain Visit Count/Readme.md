## 811. Subdomain Visit Count

[Visit Problem](https://leetcode.com/problems/subdomain-visit-count/description/)

**Approach :**<br>
The algorithm is straightforward: we just do what the problem statement tells us to do.<br>

For an address like `a.b.c,` we will count `a.b.c, b.c,` and `c`. For an address like `x.y`, we will count `x.y and y`.<br>

To count these strings, we will use a hash map. To split the strings into the required pieces, we will use library split functions.<br>

**Complexity Analysis :**<br>

-   Time Complexity:`O(N)`, where N is the length of `cpdomains`, and assuming the length of `cpdomains[i]` is fixed.
-   Space Complexity: `O(N)`, the space used in our count.
