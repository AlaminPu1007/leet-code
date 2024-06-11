## 2864. Maximum Odd Binary Number

This problem involved about, You are given a binary string s that contains at least one '1'. <br/>

You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.<br/>

Return a string representing the maximum odd binary number that can be created from the given combination. <br/>

Note that the resulting string can have leading zeros.<br/>

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-odd-binary-number/description/)

**Approach :**<br/>

1. Implement a counting sort algorithm to rearrange the binary digits of the given binary string.
2. Counting sort is a linear time sorting algorithm that counts the occurrences of each element in the input array and then rearranges the elements based on their counts.
3. In this case, we only have two elements, '0' and '1', in the binary string.
4. Initialize a variable `left` to keep track of the leftmost position where a '1' digit needs to be placed.
5. Iterate through the binary string and move all '1' digits to the left side of the string, while maintaining their relative order.
6. Swap each '1' digit encountered with the character at position `left` and increment `left`.
7. After traversing the entire string, place the last '1' digit at the position just before the last character in the string.
8. Return the rearranged binary string as the maximum odd binary number.

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n)` - for counting sort we iterate over the input string and partitioning the given string required `O(n)` time complexity
-   Space-Complexity:`O(1)` - we are not using any extra spaces
