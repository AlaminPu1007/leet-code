## 2187. Minimum Time to Complete Trips

[Visit Problem](https://leetcode.com/problems/minimum-time-to-complete-trips/description/)

**Algorithm :**<br/>

-   Initialize the search space by setting boundaries. The minimum possible valid time is 1 since we can't set a shorter time than this, thus we set the left boundary as `left = 1`. For the right boundary, we can set it as the totalTrips multiplied by the maximum time required by one bus, thus this time is long enough for buses to finish totalTrips, so we set the right boundary as `right = max(times) * totalTrips`.
-   While `left < right`, get the middle value as `mid = (left + right) / 2`
-   Check if all buses can finish totalTrips in mid time, by iterating over time and adding up the result of the integer division of `time[i]` by mid

1. If the sum is larger than or equals to totalTrips, it means mid is long enough, we cut the larger half of the searching space by setting right = mid and repeat step 2.
2. Otherwise, it means mid is too short, we shall cut the smaller half of the searching space by setting left = mid + 1 and repeat step 2.

**Complexity Analysis :**<br/>

-   Time-complexity: `O(n * log⁡(m*k))`
-   Space-Complexity: `O(1)`

**References :**<br/>

-   [From leetcode official solution](https://leetcode.com/problems/minimum-time-to-complete-trips/editorial/)
