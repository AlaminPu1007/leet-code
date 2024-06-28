## 352. Data Stream as Disjoint Intervals

This problem involved about, given a data stream input of non-negative integers a1, a2, ..., an, summarize the numbers seen so far as a list of disjoint intervals. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/data-stream-as-disjoint-intervals/description/)

**Approach For brute force solution:**<br/>

-   `Constructor (`SummaryRanges()`)` - Initializes an unordered set (`st`) to store the unique integers.

-   `Method (`addNum(int value)`)` - Inserts the given integer value into the set.

-   Method (`getIntervals()`):` - Retrieves the intervals from the set of integers.
    1.  Converts the set to a sorted vector (`temp`).
    2.  Iterates through the sorted vector and identifies consecutive integers to form intervals.
    3.  Returns a vector of vectors representing the intervals.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))`
-   Space-Complexity: `O(n))`
