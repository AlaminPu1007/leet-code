# 14. Longest Common Prefix
Problem  link: https://leetcode.com/problems/longest-common-prefix/

** Problem :**<br>
Write a function to find the longest common prefix string amongst an array of strings.<br>

If there is no common prefix, return an empty string "".<br>

**Approach :**<br>
// Sort array of string<br>
  sort(strs.begin(), strs.end())<br>
 while i < first_string_len && j < last_string_len<br>
 if strs[0][i] == strs[len-1][j]<br>
 ans += strs[0][i]<br>
  i++<br>
  j++<br>

  return ans
