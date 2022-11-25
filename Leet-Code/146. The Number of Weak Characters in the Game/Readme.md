## 1996. The Number of Weak Characters in the Game

[Open Problem](https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/)

**Problem :**<br>
Since we need to return number of weak characters and a character is said to be weak if any other character has both attack and defense levels strictly greater than this character's attack and defense levels, so we need to implement a custom sort here so that we can handle both the cases out here.<br>

**Approach :**<br>

-   We sort the properties by the first element i.e attack( High->Low)
-   So now we need to handle the second element only i.e defense.
-   Iterate through the back and use a variable maxTillNow to store the maximum defense we saw till now.
-   If at any point the current defense is smaller than the maxTillNow it clearly means that we have a property with both attack and defense greater than the current property so we can increase our ans else we just update our <br> maxTillNow.

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n * log(n))`
-   Space-Complexity: `O(1)`
