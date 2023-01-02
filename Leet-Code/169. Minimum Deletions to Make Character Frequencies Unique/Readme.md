## 1647. Minimum Deletions to Make Character Frequencies Unique

[Problem link](https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/description/)

**Approach of Set Method:**<br>

Basically insert function returns `pair<iterator,bool>` when we insert a single element.<br>
Because elements in a set are unique, the insertion operation checks whether each inserted element is equivalent to an element already in the container, and if so,<br> the element is not inserted, returning an iterator to this existing element (if the function returns a value).<br>
[Set insert method](https://cplusplus.com/reference/set/set/insert/)

**Complexity Analysis Using Set:**<br>

-   Time: `O(n)`, note that the second loop will not have more than 26 \* 26 total operations.
-   Space: `O(1)`, as we will not store more than 26 different frequencies.
    [Helpful solution](https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/solutions/927549/c-java-python-3-greedy/)
