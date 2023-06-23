## 1732. Find the Highest Altitude

This problem involved about, a biker going on a road trip. The road trip consists of `n + 1` points at different altitudes. The biker starts his trip on point 0 with altitude equal 0. Return the highest altitude of a point.

# Problem description

For details problem description, please visit [LeetCode pages](https://leetcode.com/problems/find-the-highest-altitude/)

**Algorithm :**<br/>

-   Initialize the variable currentAltitude to 0; this is the current altitude of the biker.
-   Initialize the variable highestPoint to currentAltitude, as the highest altitude we have seen is 0
-   Iterate over the gain in altitude in the list gain and add the current gain altitudeGain to the variable currentAltitude
-   Update the variable highestPoint as necessary.
-   Return highestPoint.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We iterate over every integer in the list gain only once, and hence the total time complexity is equal to `O(n)`
-   Spae-Complexity: `O(n)` - We only need two variables, currentAltitude and highestPoint; hence the space complexity is constant.
