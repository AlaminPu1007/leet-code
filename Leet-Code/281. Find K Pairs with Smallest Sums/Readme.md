## 373. Find K Pairs with Smallest Sums

This problem involved about, ou are given two integer arrays `nums1 and nums2` sorted in ascending order and an integer k. Return the k pairs` (u1, v1), (u2, v2), ..., (uk, vk)` with the smallest sums.

# Problem description

For better problem description please visit [LeetCode Page](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/description/)

**Algorithm :**<br/>

-   Create two integer variables m and n. Initialize them to size of nums1 and nums2 respectively
-   Create a list ans to store the pairs with smallest sums that are to be returned as the answer.
-   Create a hash set visited to keep track of pairs that are seen. Please note that we used ordered_set in C++ in place of unordered_set because the unordered_set uses hash template to compute hashes for its entries and there is no hash specialization for pairs. Either we define the hash function of pairs or use ordered_set which is a little expensive as it adds log factor. We are using ordered_set here.
-   Initialize a min heap minHeap that takes a triplet of integers: the sum of the pair, the index in nums1 of the first element of the pair, and the index in nums2 of the second element of the pair
-   Push the first element from the both the arrays in minHeap, i.e., we push `nums1[0] + nums2[0]`, 0, 0. We also insert `pair (0, 0)` in visited
-   Iterate till we get k pairs and minHeap is not empty
    1. Pop the top of minHeap and set `i = top[1] and j = top[2]`
    2. Push pair `(nums1[i], nums2[j]) in ans`
    3. If `i + 1 < m and pair (i + 1, j)` is not in visited, we push a new pair `nums1[i + 1] + nums2[j], i + 1, j` into the heap
    4. If `j + 1 < n and pair (i, j + 1)` is not in visited, we push a new pair `nums1[i] + nums2[j + 1], i, j + 1` into the heap
-   return ans

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(min(k⋅logk,m⋅n⋅log(m⋅n)))`
-   Space-Complexity: `O(min(k,m⋅n))`

**References :**<br/>

-   [For better explanation](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/editorial/)
