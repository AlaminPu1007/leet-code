## 859. Buddy Strings

This problem involved about, given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

# Problem description

For better explanation, please visit [LeetCode Page](https://leetcode.com/problems/buddy-strings/)

**Approach (Algorithm):**<br/>

1. If the number of characters in string s and goal is different then they can never become equal, thus we return false
2. If s == goal
    - We can use a hash map or create an array of size 26 frequency to store the frequency of each character of string s.
    - If any character has a frequency of more than 1 then we can swap those two same characters, thus we will return true. Otherwise, we return false
3. Otherwise s != goal. We keep two variables firstIndex and secondIndex both initialized to -1, to store the indices of string s having different characters than string goal at the same index.
4. We iterate over each index i in string s:
    - f characters at s[i] and goal[i] are not the same, then we store the current index:
    - if firstIndex == -1, it means this is the first index with a different character, thus we update firstIndex = i. If firstIndex != -1, but secondIndex == -1, it means this is the second index with a different character, thus we update secondIndex = i.
    - But if both firstIndex and secondIndex are not -1, then it means this is the third index with a different character and it is not possible to make both strings equal using only one swap, thus we can return false in this case.
5. Check if only firstIndex was updated and secondIndex == -1, i.e. we have only one index with a different character, then we also can't make both strings equal and we return false.
6. Now, all characters of both strings are the same except at two indices. So, s[firstIndex] must be equal to goal[secondIndex] and s[secondIndex] must be equal to goal[firstIndex], to make both strings equal after swapping.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We only iterate over each index of string s once. Thus, we will take `(n)` time
-   Space-Complexity: `O(1)`- In the worst case, we might use an array of size 26 to store the frequency of each character of string s, which is considered as constant space usage
