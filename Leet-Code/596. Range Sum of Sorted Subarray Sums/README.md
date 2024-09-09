#

**Approach :**<br/>

1. **Generate `Subarray` Sums**:

    - Initialize an empty vector `subArray`.
    - Iterate through each element in the array as the starting point of `subarrays`.
    - For each starting point, calculate the sum of `subarrays` ending at each subsequent element.
    - Append each `subarray` sum to `subArray`.

2. **Sort `Subarray` Sums**:

    - Sort the vector `subArray`.

3. **Sum the Required Range**:
    - Initialize the result `res` to 0.
    - Iterate from `left-1` to `right-1` in `subArray` and accumulate the sums.
    - Use modulo `(10^9 + 7)` during accumulation to avoid overflow.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2) + O(n^2 * log(n))` - Generating all `subarray` sums takes `O(n ^ 2)`. Sorting the `subarray` sums takes `O(n^2 * log(n))`.
-   Space-Complexity: `O(n)` - due to the storage required for all `subarray` sums.
