## 168. Excel Sheet Column Title

This problem involved about, given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

# Problem description

For better problem description, please visit [Leetcode page](https://leetcode.com/problems/excel-sheet-column-title/description/)

**Approach :**<br/>

1. Initialize an empty string ans which would store the column title.

2. Do the following as long as columnNumber is greater than 0:

    - Subtract 1 from the columnNumber
    - Find the character corresponding to columnNumber % 26 and append it to the ans in the end.
    - Assign columnNumber to columnNumber / 26.

3. Reverse the string columnNumber and return it.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - we divided `conNum` by 26 each times
-   Space-Complexity: `O(n)`- since we are using an extra space to store our result
