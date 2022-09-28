# 39. Combination Sum

Problem link: https://leetcode.com/problems/combination-sum/

**Approach :**<br>
we need an recursion approach to solve this problem.<br>

first recursion called an pick element way till target is less to arr[index] value, and put each element inside new 'ds' array.<br>
After completed this recursion, we must need to removed last element, to avoid unnecessary value.<br>

Second recursion called by increment index+1, with remaining target.<br>

**Complexity :**<br>
Time-Complexity :O(n^2.k)<br>
Space-Complexity: O(n.m)<br>

**References :**<br>

- https://takeuforward.org/data-structure/combination-sum-1/
- https://www.youtube.com/watch?v=OyZFFqQtu98&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=8
