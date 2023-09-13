## 1282. Group the People Given the Group Size They Belong To

This problem involved about, there are n people that are split into some unknown number of groups. Each person is labeled with a unique ID from 0 to n - 1. You are given an integer array groupSizes, where groupSizes[i] is the size of the group that person i is in. For example, if groupSizes[1] = 3, then person 1 must be in a group of size 3.

# Problem description

For better problem description, please visit [Leetcode Page](https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/description/?envType=daily-question&envId=2023-09-11)

**Approach :**<br/>

-   Initialize an empty list of lists ans to store the groups' indices.

-   Create a hash map `groupList` where the keys are integers representing group sizes, and the values are the arrays of the corresponding indices in the group.

-   Iterate over the array groupSizes, for each index i:

    1. Insert the index i into the list `groupList[groupSizes[i]]`.
    2. If the size of the list becomes equal to groupSizes[i], store it in the answer ans. Also, clear the array for the key groupSizes[i] in the map `groupList`.

-   Return ans.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - We are iterating over each person's group size in the array `groupSizes` and storing it in the map `groupList`. Whenever the size of the list for a particular size becomes equal to the size itself, we empty the array and store it in our list. Both these operations would take `O(1)` for each element in the list. Therefore, we're basically iterating over each element three times, once in the outer for loop, a second time when we add it to the final list ans, and a final time when we clear it from the list. This makes the total operation count as `3∗N`. Hence, the total time complexity equals `O(N)`.

-   Space-Complexity: `O(n)` - The space required by the map `groupList` could store all the indices in the groupSizes in the worst-case scenario. This happens when there is only one group of size NNN. The space required by ans is required to store the answer, which is not generally considered part of the space complexity. Hence, the total space complexity equals `O(N)`
