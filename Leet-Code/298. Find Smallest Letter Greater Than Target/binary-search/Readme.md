## 744. Find Smallest Letter Greater Than Target

This problem is involved about, given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters. Return the smallest character in letters that is lexicographically greater than target.

# Problem description

For a detailed problem description, please visit the [LeetCode page](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)

**Algorithm :**<br/>

1.  Create three integers left = 0, right = letters.length - 1 and mid to start the binary search algorithm.
2.  While left <= right :
    -   Find the midpoint of the range (left, right) in the variable mid = (left + right) / 2
    -   Compare the letter at index mid with target. If letters[mid] <= target, it means all the characters at indices smaller or equal to mid would also be smaller than target because the characters in letters are sorted. As a result, we move to upper half of the range by setting left = mid + 1.
    -   Otherwise, it means all the characters at indices greater or equal to mid would also be greater than target because the characters in letters are sorted. As a result, we move to lower half of the range by setting right = mid - 1.
    -   At the end of the binary search algorithm, left will store the index of the smallest character that is lexicographically greater than target
3.  f left == letters.length, it means there is no character in letters that is lexicographically greater than target. We return letters[0]. Otherwise, we return letters[left] as left holds the smallest character greater than target

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(log(n))` - We perform `O(log*n)` iterations using the binary search algorithm as the problem set is divided into half in each iteration.
-   Space-Complexity: `O(1)`- we are not using any extra spaces. Except for a few variables left, right, and mid which take constant space each, we do not consume any other space.
