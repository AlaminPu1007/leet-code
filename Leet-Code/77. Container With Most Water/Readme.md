# 11. Container With Most Water

Problem link: https://leetcode.com/problems/container-with-most-water/

**Problem :**<br>
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.<br>

Return the maximum amount of water a container can store.<br>

Notice that you may not slant the container.<br>

**Approach :**<br>
We have to maximize the Area that can be formed between the vertical lines using the shorter line as length and the distance between the lines as the width of the rectangle forming the area.<br>

**Complexity :**<br>

- Time complexity: O(n).
- Space complexity: O(1).
