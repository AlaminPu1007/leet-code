## 1255. Maximum Score Words Formed by Letters

This problem involved about, given a list of words, list of single letters (might be repeating) and score of every character.<br/>

Return the maximum score of any valid set of words formed by using the given letters (words[i] cannot be used two or more times).

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-score-words-formed-by-letters/description/)

### Approach

1.  **Method (`maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score)`):**

    -   Create an unordered map `lettersCount` to store the frequency of each letter in the `letters` array.
    -   Call the `DFS` function starting from index 0 to explore all possible combinations of words.

2.  **Helper Method (`DFS(int index, vector<string>& words, unordered_map<int, int>& lettersCount, vector<int>& score)`):**

    -   Base case: If the index is out of bounds, return 0.
    -   Recursive case:
        -   Calculate the result if the current word is not picked.
        -   Check if the current word can be formed with the remaining letters using the `isValidWord` method.
        -   If valid, decrement the letter frequencies in `lettersCount`, calculate the score of the current word using `getScore`, and call `DFS` recursively for the next index.
        -   Restore the letter frequencies after the recursive call to ensure correct counts for subsequent recursive calls.
    -   Return the maximum score obtained by either picking or not picking the current word.

3.  **Helper Method (`isValidWord(string word, unordered_map<int, int>& lettersCount)`):**

    -   Create a frequency map `freq` for the current word.
    -   Check if each character in the word can be formed with the remaining letters in `lettersCount`.

4.  **Helper Method (`getScore(string word, vector<int> score)`):**

    -   Calculate the total score of the word by summing the scores of each character using the `score` array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2^n * words_len) + O(n)` - In the worst case, we explore all subsets of words, resulting in `O(2^n)` calls. we check the validity of the word and update the frequency, which takes `O(words_len)` time. We are using `lettersCount` map, that also required `O(n)`.

-   Space-Complexity: `O(n)` - The recursion stack can go as deep as the number of words, resulting in `O(n)` space complexity.
