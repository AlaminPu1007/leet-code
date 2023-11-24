## 2785. Sort Vowels in a String

This problem involved about, Given a 0-indexed string s, permute s to get a new string t such that: - All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i]. <br/> - The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/sort-vowels-in-a-string/description/)

**Approach-1 :**<br/>

-   iterate over the given string `s` and push vowels in another array
-   then sort those vowels array
-   again iterate over the root string:
    1. if `s[i]` is equal to vowels then replace this character with by vowels array[i] and so on

**Approach-2 :**<br/>

1. Create a method isVowel that returns true if the given character is a lowercase or uppercase vowel or not, otherwise return false.

2. Iterate over the string s and store the frequencies of each vowel in the map count.

3. Initialize:

    - A string sortedVowel to `AEIOUaeiou` the answer string, and
    - An empty string ans to store the answer string.
    - An integer j to 0 to track the current index in the string sortedVowel

4. Iterate over the string s and for each character

    - If the character is consonant, add it to the string ans.
    - If the character is a vowel, find the first character in the string `sortedVowel` which has a non-zero frequency in the map count.
    - Add the character `sortedVowel[j]` to ans and decrement the count in the map count.

5. Return `s`

**Complexity Analysis for approach-1 :**<br/>

-   Time-Complexity: `O(n) + O(n * log(n)) + O(n) => O(n*log(n))` - using sort has `O(n*log(n))` time complexity
-   Space-Complexity: `O(n)` - sorting has `O(n)` space complexity

**Complexity Analysis for approach-2 :**<br/>

-   Time-Complexity: `O(n) + O(n) => O(n)`
-   Space-Complexity: `O(1)`
