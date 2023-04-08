## 2300. Successful Pairs of Spells and Potions

-   [Visit Problem](https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/)

**Approach :**<br/>

-   we need to perform an binary-search algorithm to slightly change of it.
-   loop through `spells` array, and perform binary search of each `spells element` on `potions-array`
-   calculate `mid` and check `spells[i] * potions[mid]` is greater than or equal to `success`
-   if `true` then update `right = mid - 1` and keep track of `mid` value by `lastIndex` variable
-   if `false`, update left pointer by `mid + 1` and so on

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n)) + O(n * log(m))` // sorting array + perform binary-search
-   Space-Complexity: `O(n)`
