# 658. Find K Closest Elements

Problem link: https://leetcode.com/problems/find-k-closest-elements/

**Approach-1 :**<br>

- Make an key,value pairs by using vector pairs
- sort them
- push arr[Pairs[i].second] in new vector (ans)
- return ans

**Complexity, Approach-1 :**<br>
Time-Complexity: `O(n*log(n))` <br>
Space-Complexity: `O(n)` <br>

**Complexity, Approach-1 :**<br>
Time-Complexity: `O(log(n))` //for finding left value by using binary search algorithm, and O(n) for pushing element in new array<br>
Space-Complexity: `O(n)`<br>
