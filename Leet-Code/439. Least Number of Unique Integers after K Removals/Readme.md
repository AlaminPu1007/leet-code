## 1481. Least Number of Unique Integers after K Removals

This problem involved about, given an array of integers arr and an integer k. Find the least number of unique integers after removing exactly k elements.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/description/)

**Approach for counting sort (optimal solution) :**<br/>

1. Create a hash-map `freq` to count the frequency of each element in the array.
2. Create a vector `countingOfFrequencies` to count the frequency of frequencies.
3. Iterate through the array and count the frequency of each element.
4. Iterate through the hash-map `freq` and update the `countingOfFrequencies` vector.
5. Initialize `res` to the number of unique elements in the array.
6. Iterate through the `countingOfFrequencies` vector.
    - If `k` is greater than or equal to `i * countingOfFrequencies[i]`, subtract `i * countingOfFrequencies[i]` from `k` and decrement `res` by `countingOfFrequencies[i]`.
    - Otherwise, subtract `(k / i)` from `res` and break the loop.
7. Return the value of `res`.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the input array `arr`. We iterate through the array twice to count the frequency of elements and frequencies.

-   Space-Complexity: `O(n)` - where `n` is the length of the input array `arr`. We use hash-maps and vectors to store frequency information.
