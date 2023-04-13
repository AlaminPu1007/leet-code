## 881. Boats to Save People

-   [Visit Problem](https://leetcode.com/problems/boats-to-save-people/)

**Intuition :**<br/>

If the heaviest person can share a boat with the lightest person, then do so. Otherwise, the heaviest person can't pair with anyone, so they get their own boat.<br/>

The reason this works is because if the lightest person can pair with anyone, they might as well pair with the heaviest person.

**Approach :**<br/>

-   Let `people[left]` to the currently lightest person, and `people[right]` to the heaviest.
-   Then, as described above, if the heaviest person can share a boat with the lightest person `(if people[right] + people[left] <= limit)` then do so; otherwise, the heaviest person sits in their own boat.

**Complexity :**<br/>

-   Time-Complexity: `O(n*log(n))`
-   Space-Complexity: `O(log(n))`, Some extra space is used when we sort people in place.
