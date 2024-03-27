## 3005. Count Elements With Maximum Frequency

This problem involved about, you are given an array `nums` consisting of positive integers.<br/>
Return the total frequencies of elements in `nums` such that those elements all have the maximum frequency.<br/>
The frequency of an element is the number of occurrences of that element in the array.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-elements-with-maximum-frequency/description)

**Approach :**<br/>

1. Initialize an unordered map `Map` to store the frequency of each element in the given array `nums`.
2. Initialize variables `maxFrequency` and `totalFrequency` to track the maximum frequency and the number of elements with that frequency, respectively.
3. Iterate through the elements of `nums` and update the frequency count in the map `Map`.
4. While iterating, update the `maxFrequency` if a higher frequency is encountered.
5. After counting frequencies, iterate through the map to find elements with a frequency equal to `maxFrequency` and increment the `totalFrequency` counter.
6. Finally, return the product of `totalFrequency` and `maxFrequency`, which represents the maximum frequency elements in the array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - Finding the maximum frequency and the total number of elements with that frequency takes O(n) time.
-   Space-Complexity: `O(n)` - We are using an extra hash-map, that requires `O(n)` extra space.
