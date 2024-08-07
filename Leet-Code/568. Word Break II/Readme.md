## 140. Word Break II

This problem involved about, given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in any order.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/word-break-ii/description/)

**Approach :**<br/>

-   **Method (`wordBreak(string s, vector<string>& wordDict)`):**

    -   Initialize a vector `res` to store the resulting sentences.
    -   Convert the `wordDict` vector to an unordered set `st` for O(1) lookup time.
    -   Call the `DFS` function starting from index 0 to explore all possible sentence formations.

-   **Helper Method (`DFS(int index, string s, unordered_set<string>& st, string& curStr, vector<string>& res)`):**
    -   Base case: If the index reaches the end of the string, add the current sentence (`curStr`) to the result vector `res`.
    -   Iterate through all possible substrings starting from the current index.
    -   If a substring (word) is found in the set `st`, append the word to the current sentence (`curStr`), and call `DFS` recursively to explore further.
    -   After returning from the recursive call, backtrack by restoring the original sentence to explore other possibilities.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2 ^ n)` - In the worst case, we explore all possible partitions of the string, resulting in `O(2^n)` calls.

-   Space-Complexity: `O(2 ^ n)` - there are `O(2 ^ n)` possible combinations of splits. Thus, in the worst case, each combination generates a different sentence that needs to be stored, leading to exponential space complexity.
