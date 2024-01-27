## 380. Insert Delete GetRandom O(1)

This problem involved about, implement the RandomizedSet class: <br/>

-   RandomizedSet() Initializes the RandomizedSet object.
-   bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.
-   bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.
-   int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the same probability of being returned.

You must implement the functions of the class such that each function works in average O(1) time complexity.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/insert-delete-getrandom-o1/description/)

**Approach :**<br/>

1. Initialization:

    - The `RandomizedSet` class is designed to store a set of unique integers and perform random operations efficiently.

2. Class Members:

    - The class has two main data structures:
        - `unordered_map<int, int> Map`: This map stores each value along with its index in the `values` array.
        - `vector<int> values`: This vector stores the unique integers.

3. Methods:

    - `searchItem(int v)`:

        - Checks if the given value `v` exists in the set.
        - Returns `true` if the value is found, and `false` otherwise.

    - `insert(int val)`:

        - Inserts a new value `val` into the set.
        - If the value already exists, returns `false`.
        - Otherwise, stores the value's index in the `Map` and appends the value to the `values` array.
        - Returns `true` to indicate successful insertion.

    - `remove(int val)`:

        - Removes the value `val` from the set.
        - If the value doesn't exist, returns `false`.
        - Otherwise, replaces the value at the index of `val` with the last element in `values` array.
        - Updates the index of the moved element in `Map`.
        - Removes the last element from `values` and removes `val` from `Map`.
        - Returns `true` to indicate successful removal.

    - `getRandom()`:
        - Returns a random element from the set using `rand()` and modulo with the size of `values` array.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` - The time complexity of each operation (`insert`, `remove`, `getRandom`) is O(1) on average, assuming constant time for hash map operations and vector operations.
-   Space-Complexity: `O(n)` - The space complexity is O(N), where N is the number of unique elements stored in the set. This includes the space used by the `Map` and `values` array.
