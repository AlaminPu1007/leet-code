## 316. Remove Duplicate Letters

This problem involved about, given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

# Problem description

For better problem description, please visit [Leetcode Pages](https://leetcode.com/problems/remove-duplicate-letters/description/)

**Approach :**<br/>

1. Initialize variables and data structures:
    - len to store the length of the input string s.
    - res to store the result string.
    - freq[26] to maintain the frequency of each lowercase letter ('a' to 'z') in the input string s.
    - stack<char> st to maintain a stack of characters to help in constructing the result string.
    - isInserted[26] to keep track of whether a character has already been inserted into the st stack.
2. Iterate through the input string s to calculate the frequency of each letter using freq array.
3. Iterate through the input string s again:
    - Decrease the frequency of the current character in freq.
    - Check if the current character has already been inserted into the result string. If so, skip to the next character.
    - While the stack is not empty, the top character of the stack is greater than the current character, and there are still remaining occurrences of the top character in the input string, pop characters from the stack and mark them as not inserted.
    - Push the current character onto the stack and mark it as inserted.
4. After processing all characters in s, the stack st contains the unique characters in reverse order.
5. Pop characters from the stack and append them to the res string.
6. Reverse the res string to obtain the final result.
7. Return the res string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The code iterates through the input string s twice, which takes O(N) time, where N is the length of the string.
-   Space-Complexity: `O(n)` - we are using an additional `res` to store result. Therefore, the space complexity is O(N) due to the res string and O(1) for the other data structures.
