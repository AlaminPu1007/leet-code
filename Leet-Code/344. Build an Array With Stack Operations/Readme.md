## 1441. Build an Array With Stack Operations

This problem involved about, you are given an integer array target and an integer n. Return the stack operations needed to build target following the mentioned rules. If there are multiple valid answers, return any of them.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/build-an-array-with-stack-operations/description)

**Approach :**<br/>

1. Initialize an empty vector 'ans' to store the sequence of operations.
2. Initialize a variable 'j' to keep track of the current index in the 'target' array. Set it to 0.
3. Iterate through the numbers from 1 to 'n':
    - if 'j' is less than the size of the 'target' array and the current number is equal to the 'target[j]', then:
        1. Append "Push" to the 'ans' vector.
        2. Increment 'j' to move to the next element in the 'target' array.
    - Otherwise, if the current number does not match the 'target[j]', then:
        1. Append "Push" to the 'ans' vector.
        2. Append "Pop" to the 'ans' vector.
4. Return the 'ans' vector, which contains the sequence of operations to build the target array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - iterate over the `n` has `O(n)` time complexity
-   Space-Complexity:`O(n)` - we are using an extra space for `ans`
