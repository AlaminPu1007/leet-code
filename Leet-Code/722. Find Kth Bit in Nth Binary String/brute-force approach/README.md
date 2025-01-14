# 1545. Find Kth Bit in Nth Binary String

This problem involved about, given two positive integers n and k, the binary string Sn is formed as follows:

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/description)

**Approach :**<br/>

#### Step 1: Start with Base Case `S1`

We initialize `S1 = "0"` as the base string.

#### Step 2: Iteratively Build the Strings

For each subsequent `Si` (where `i` ranges from 2 to `n`), generate the string by:

-   Appending `'1'` to the previous string `Si-1`.
-   Appending the reversed and inverted version of `Si-1`.

This process constructs `Si` by applying the transformation as per the rules.

#### Step 3: Return the K-th Bit

Once the string `Sn` is built, the answer is the k-th bit (1-based indexing) of `Sn`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(2^n)` - as each step generates a string of double the previous length, leading to an exponential growth in string size
-   Space-Complexity: `O(2^n)` - since we store the string of length `2^n`.
