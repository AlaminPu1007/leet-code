## 229. Majority Element II

This problem involved about, Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/majority-element-ii/description/)

**Approach :**<br/>

-   For this solution we need an extra spaces to hold frequency of each element
-   then loop over the hash map, and check item frequency is greater than `(arr.length/3)` and put into result
-   return res

**Approach-2:**<br/>

-   we nee [Boyer-Moore Majority Voting Algorithm](https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/) to solved this problem. we will slightly modified it

**Complexity Analysis Of Approach-1:**<br/>

-   Time-Complexity: `O(n)` - iterate over the array have `O(n)` times
-   Space-Complexity: `O(n)` - we are using an extra spaces to hold key value pairs

**Complexity Analysis Of Approach-2:**<br/>

-   Time-Complexity: `O(n)` - iterate over the array have `O(n)` times
-   Space-Complexity: `O(1)` - we are not using any kind of extra spaces
