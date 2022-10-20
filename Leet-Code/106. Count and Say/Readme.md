## 38. Count and Say

[problem link](https://leetcode.com/problems/count-and-say/)

**Approach :**<br>
**Recursive Approch:**

**BASE CASE :**

- First Base Case : - if(n == 1) then return "1";
- Second Base Case :- if(n == 2)then return "11";

**RECURSIVE CALL :**

- Call the fun(n-1) until it didn't reached Base Case;
- When function hit the base case,then move procesing part of code;

**PROCESSING :**

- Store the resultant string into string x;
- if x[i] == x[i+1]the increase the counter;
- when if the case where x[i] != x[i+1] , then simply store the counter and then store the value of string;
