## 496. Next Greater Element I

This problem involved about, The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/next-greater-element-i/description/)

**Approach-1 :**<br/>

-   To solved this problem we need brute force algorithm
-   iterate over the `nums1` array:
    1. iterate over the `nums2` and check `nums1[i] == nums2[j]` then mark the flag 0 to 1
    2. if flag is 1, then check next grater element and push those item in our result array and so on
    3. else put `-1` if we not get any greater element

**Approach-2 (optimal-solution) :**<br/>
The second approach uses a stack and a map. We traverse nums2 and push each element onto the stack. If the current element is greater than the top element of the stack, we pop elements from the stack and add them to the map with the current element as the value. Once we finish traversing nums2, we iterate through nums1 and check if each element has a next greater element in the map. If it has, we update the element in nums1 with the corresponding value in the map. Otherwise, we update the element in nums1 with -1.

**Complexity Analysis for approach-1 :**<br/>

-   Time-Complexity: `O(n^2)` - We iterate over the `nums1` array and for each `nums1` we check on `nums2` that have `O(n^2)` times
-   Space-Complexity: `O(n)` - We are using an extra space to store result

**Complexity Analysis for approach-2 :**<br/>

-   Time-Complexity: `O(n) + O(m)`
-   Space-Complexity: `O(n)`
