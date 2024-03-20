## 2391. Minimum Amount of Time to Collect Garbage

This problem involved about, you are given a 0-indexed array of strings garbage where `garbage[i]` represents the assortment of garbage at the ith house. `garbage[i]` consists only of the characters `'M', 'P' and 'G'` representing one unit of metal, paper and glass garbage respectively. Picking up one unit of any type of garbage takes 1 minute.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/)

**Approach :**<br/>

1. Initialize an array prefixSum of the size travel.length + 1, the $i_{th}$ value in this array will store the sum of first i - 1 elements in the array travel.

2. Initialize an empty map garbageLastPos from character to integer, this map will store the last index of the house for the type of garbage equal to the key.

3. Initialize an empty map garbageCount from character to integer, this map will store the count of the type of garbage represented by the key in all the houses.

4. Iterate over the array garbage and iterate over each garbage for each house, increment the count in garbageCount and store the index in the map garbageLastPos.

5. Iterate over each garbage type and for each type (say c) add the garbageCount[c] and prefixSum[garbageLastPos[c]] to the answer variable ans.

6. return `ans`

**Complexity Analysis :**<br/>

-   Time-Complexity:`O(n * m)` - We first iterate over the array travel to create the prefixSum, the size of travel is NNN and hence this will take `O(N)` time. We then iterate over the garbage array and for each string in the array we iterate over each character to store info in the maps garbageLastPos and garbageCount, this operation will take `O(N∗M)` time.

-   Space-Complexity: `O(n)` - We are using an extra `hash-map` spaces
