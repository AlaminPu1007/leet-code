## 1838. Frequency of the Most Frequent Element

This problem involved about, the frequency of an element is the number of times it occurs in an array.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/frequency-of-the-most-frequent-element/description)

**Approach :**<br/>
The algorithm sorts the input array and utilizes a sliding window technique to compute the maximum frequency. It adjusts the window's size while maintaining a total sum within a limit set by k.

**Algorithm :**<br/>

1. Sort the given array `nums`.
2. Initialize left as 0 (start of the window), ans as 0 to store the maximum frequency, and total as 0 to track the sum within the window.
3. Iterate through the array using right pointer.
    - Add the current element target to the total.
    - While the sum of the elements in the current window exceeds the total sum plus k times the window size:
        - Subtract the element at left from the total.
        - Increment left to shrink the window.
    - Update ans with the maximum of the current window size.
4. Return the maximum frequency ans.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - sorting has that much time complexity
-   Space-Complexity: `O(log(n))` - in c++ sorting requires extra `O(log(n))` spaces
