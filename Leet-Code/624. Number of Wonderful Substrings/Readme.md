## 1915. Number of Wonderful Substrings
This problem involved about, a wonderful string is a string where at most one letter appears an odd number of times.<br/>

# Problem description
For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/number-of-wonderful-substrings/description/)

**Approach :**<br/>

1. Initialize a map `freqCount` to store the frequency count of XOR values encountered.
2. Initialize `freqCount[0]` to 1 as an empty string has a wonderful substring.
3. Initialize `count_xor` to 0 to keep track of the cumulative XOR of characters encountered.
4. Initialize `res` to 0 to store the count of wonderful substrings.
5. Iterate through each character in the word:
   - Convert the character to an integer representing its position in the alphabet (0-indexed).
   - Calculate the XOR value of the character using bitwise left shift (`1 << no_of_shift`).
   - Update `count_xor` by XORing it with the calculated shift.
   - Check if the current XOR value `count_xor` has been encountered before. If yes, increment `res` by the frequency count of `count_xor` stored in `freqCount`.
   - Iterate through all possible characters (0 to 9) and calculate the XOR value by XORing `count_xor` with each character's shift value. Increment `res` by the frequency count of each XOR value stored in `freqCount`.
   - Increment the frequency count of `count_xor` in `freqCount`.
6. Return `res`, which represents the count of wonderful substrings.


**Complexity Analysis :**<br/>

- Time-Complexity: `O(n)` - The time complexity of the algorithm is `O(N)`, where N is the length of the input word. This is because we iterate through each character of the word once.

- Space-Complexity: `O(n)` - The space complexity is `O(N)` as we use additional space to store the frequency count of XOR values encountered.
