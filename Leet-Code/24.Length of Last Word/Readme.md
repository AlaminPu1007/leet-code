# 58. Length of Last Word

Problem link: https://leetcode.com/problems/length-of-last-word/

**Problem :**<br>
Given a string s consisting of words and spaces, return the length of the last word in the string.<br>

A word is a maximal substring consisting of non-space characters only.<br>

**Approach :**<br>
First we start our iteration from, backward, i = string.length() - 1<br>

Then, we need to only check character<br>
if(string[i] != ' ') <br>
count = count + 1 <br>
break <br>

else if := count > 0 <br>

return count<br>

**Complexity :**<br>
T.C : O(N)<br>
S.C : O(1)<br>
