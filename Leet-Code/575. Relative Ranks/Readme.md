## 506. Relative Ranks
This problem involved about, you are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.<br/>

# Problem description
For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/relative-ranks/description/)

**Approach :**<br/>

1. Create a copy of the input vector to preserve the original order of scores.
2. Create a map to store the index of each score in the original vector.
3. Sort the copy of the scores in descending order to determine the relative ranks.
4. Traverse the sorted scores and assign medals or ranks to each score based on its position.
5. Return the vector of ranks.

**Complexity Analysis :**<br/>
- Time-Complexity:`O(n*log(n))` - Sort the array required `O(n*log(n))` time complexity
- Space-Complexity:`O(n)` -  because the algorithm uses additional space for the copy of scores, the map, and the output vector.