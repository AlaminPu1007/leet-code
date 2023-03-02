## 540. Single Element in a Sorted Array

[Visit Problem](https://leetcode.com/problems/single-element-in-a-sorted-array/description/)

**Approach :**<br>

The main thing is that, we need to keep track our target element is present left of mid or right side of mid.<br/>
if `mid` element start index is even and `mid+1` index is odd then the target item must be preset right side of mid.<br/>
must update left pointer by `mid + 1`, else update `r = mid - 1`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))`
-   Space-Complexity: `O(1)`
