## 930. Binary Subarrays With Sum

# Problem description

For better problem description, please visit []()

**Approach :**<br/>

1. The method `numSubarraysWithSum` calculates the number of subarrays with a sum equal to `goal` by subtracting the count of subarrays with a sum less than `goal` from the count of subarrays with a sum less than or equal to `goal - 1`.
2. It calls the `helperMethod` twice with different values of `x`, which represents the target sum.
3. The first call to `helperMethod` with `goal` calculates the count of subarrays with a sum equal to `goal`.
4. The second call to `helperMethod` with `goal - 1` calculates the count of subarrays with a sum less than or equal to `goal - 1`.
5. The difference between the counts obtained from the two calls gives the count of subarrays with a sum equal to `goal`.

### Method: helperMethod

1. The `helperMethod` calculates the count of subarrays with a sum less than or equal to `x` using a sliding window approach.
2. Initialize variables `res` to 0, `left` to 0, and `curSum` to 0.
3. Iterate the right pointer from 0 to the end of the array.
4. Add the value at the current right pointer to `curSum`.
5. While `curSum` is greater than `x`, subtract the value at the left pointer from `curSum` and increment `left`.
6. Add the count of subarrays with a sum less than or equal to `x` for the current window size to `res`.
7. Repeat steps 4-6 until the right pointer reaches the end of the array.
8. Return `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where N is the size of the input array `nums`. The algorithm involves iterating through the array once.
-   Space-Complexity: `O(1)` - as the algorithm uses constant extra space.
