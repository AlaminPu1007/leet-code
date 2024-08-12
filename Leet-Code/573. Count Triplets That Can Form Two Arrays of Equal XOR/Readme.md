# 1442. Count Triplets That Can Form Two Arrays of Equal XOR

This problem involved about, given an array of integers arr. We want to select three indices `i, j` and `k` where `(0 <= i < j <= k < arr.length)`.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/description)

### Brute force approach (Accepted)

**Approach :**<br/>

1. **Initialization**:

   - Get the size of the array `n`.
   - Initialize the result `res` to 0, which will store the count of valid triplets.

2. **First Loop (i)**:

   - Iterate over each possible starting point `i` from `0` to `n-1`.
   - Initialize `xorA` to `0`, which will store the XOR of elements from `i` to `j-1`.

3. **Second Loop (j)**:

   - For each `i`, iterate `j` from `i+1` to `n`.
   - Update `xorA` with the XOR of the element at `j-1`.

4. **Third Loop (k)**:

   - For each `j`, initialize `xorB` to `0`.
   - Iterate `k` from `j` to `n` to calculate the XOR of elements from `j` to `k`.
   - Update `xorB` with the XOR of the element at `k`.
   - Check if `xorA` equals `xorB`. If they are equal, increment the result `res`.

5. **Return**:
   - Return the result `res`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n^3)` -
- Space-Complexity: `O(1)` -

<br/>
<br/>

### Prefix sum

**Approach :**<br/>

1. **Initialization**:

   - Get the size of the array `n`.
   - Initialize the result `res` to 0, which will store the count of valid triplets.
   - Create a `prefixXor` vector initialized with the elements of `arr` and insert `0` at the beginning.

2. **Calculate Prefix XOR**:

   - Iterate over the `prefixXor` vector from index `1` to `n`, updating each element to be the XOR of itself and the previous element. This step calculates the cumulative XOR up to each index.

3. **Find Triplets**:

   - Iterate over each possible starting point `i` from `0` to `n`.
   - For each `i`, iterate `j` from `i + 1` to `n`.
   - Check if `prefixXor[i]` equals `prefixXor[j]`. If they are equal, it means the XOR from `i` to `j-1` is equal to the XOR from `j` to `k`.
   - Increment `res` by `(j - i - 1)` for each valid pair `(i, j)`.

4. **Return**:
   - Return the result `res`.

**Complexity Analysis :**<br/>

- Time-Complexity: `O(n^2)` - due to the nested loops over `i and j`.
- Space-Complexity: `O(n)` - ue to the `prefixXor` vector used to store cumulative XOR values.