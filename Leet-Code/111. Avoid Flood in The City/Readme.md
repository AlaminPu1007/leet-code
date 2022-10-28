## 1488. Avoid Flood in The City

[problem-link](https://leetcode.com/problems/avoid-flood-in-the-city/)

**Approach :**<br>
Idea is to maintain a set of the indexes of zero and a hashmap of indexes of rain.<br>
Whenever we find a zero in the rains vector, we push it into zero set which maintain the indexes of zero.<br>
If the rains[i] is non-zero, then we see if we have already filled the lake.<br>
If it is already filled, we try to empty it.<br>
We find the last index of rains[i].<br>
Then we find the index of the lake we want to empty which is the next bigger element than the last index of rains[i]. (As we can't empty the lake before it is filled).<br>
If, no such zero slot is found, the lake will be flooded, hence return an empty result.<br>
Once zero is filled, erase it from the set.<br>

**Complexity :**<br>
// upper_bound complexity is `O(log(n))` and rains array size is n

- Time-Complexity: `O(n*log(n))`
- Space-Complexity: `O(n)`
