## 1619. Mean of Array After Removing Some Elements

[Visit problem](https://leetcode.com/problems/mean-of-array-after-removing-some-elements/description/)

**Approach :**<br>
In this problem we must read the very important constraint of length of arr is multiple of 20, and we know from basic maths that 5% of 20 is 1 so any arr length will have 5% same as it is multiple of 20.<br>
Lets consider length of arr is 60.<br>
To start solving this problem we will first sort the array.<br>
after sorting 5% min of arr will be first 3 elements and 5% max will be last 3 letters(60-3)<br>
so we will start iterating on array starting from 3 till 57 and keep adding the sum and counting the number of elements iterated.<br>
we will return sum/count.<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n*log(n))`
-   Space-Complexity: `O(1)`
