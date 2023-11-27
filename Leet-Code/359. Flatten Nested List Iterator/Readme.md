## 341. Flatten Nested List Iterator

This problem involved about, you are given a nested list of integers nestedList. Each element is either an integer or a list whose elements may also be integers or other lists. Implement an iterator to flatten it.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/flatten-nested-list-iterator/description)

**Approach :**<br/>

1. Maintain three variables:

    - Vector `res` for the flattened list of integers.
    - Integer cuIndex, to keep track of the current position within the flattenedList

2. Create a recursive function called flatten that takes a vector of NestedInteger as input:

    - iterate through the elements in the input currentList.
    - If the current element is an integer (as determined by isInteger()), add it to the flattenedList using getInteger().
    - If the current element is a nested list, recursively call the flatten function with the nested list to continue flattening.

3. In the constructor NestedIterator, initialize the nestedList and call the flatten function to populate the flattenedList.

4. In the next function to return the next integer from flattenedList, incrementing currentIndex accordingly.

5. In the hasNext function to check if there are more integers in the flattenedList.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - It takes n steps to flatten the list since we are recursively iterate over it until it is exhausted and have no more integers so complexity is O(N). Where N is the total number of integers in the list.

-   Space-Complexity: `O(n)` - we are using an extra space to hold result
