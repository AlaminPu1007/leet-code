# 2683. Neighboring Bitwise XOR

This problem involved about, a 0-indexed array derived with length n is derived by computing the bitwise XOR (⊕) of adjacent values in a binary array original of length n.

**Approach :**<br/>

1. `Understanding the XOR Operation`:

    - The XOR operation (`^`) is commutative and associative, with these key properties:
        - `( a ^ a = 0 )`
        - `( a ^ 0 = a )`
    - Given a binary array, the XOR of all adjacent elements can result in either `0` or `1`.

2. `Key Observation`:

    - To form a valid original array, the sum of all elements in the `derived` array when XORed must equal `0`. This is because the XOR of all adjacent pairs in a cyclic array includes every element exactly twice, reducing the XOR result to `0`.

3. `Algorithm`:
    - Initialize a result variable `res` as `0`.
    - Traverse the `derived` array and XOR each element with `res`.
    - After traversing the array, check if `res == 0`. If true, a valid original array exists; otherwise, it does not.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through the `derived` array once.

-   Space-Complexity: `O(1)` - Only a single integer variable `res` is used, consuming constant space.
