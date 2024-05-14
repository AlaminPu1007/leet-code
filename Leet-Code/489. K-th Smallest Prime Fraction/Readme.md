## 786. K-th Smallest Prime Fraction

This problem involved about, you are given a sorted integer array arr containing 1 and prime numbers, where all the integers of arr are unique. You are also given an integer k. <br/>

For every i and j where 0 <= i < j < arr.length, we consider the fraction arr[i] / arr[j]. <br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/k-th-smallest-prime-fraction/description)

**Approach :**<br/>

-   (`kthSmallestPrimeFraction(vector<int> &arr, int k)`) - Finds the kth smallest prime fraction within the given list of integers (`arr`).

    -   Initializes variables `low` and `high` to represent the lower and upper bounds of the possible prime fraction.
    -   Performs binary search to find the target prime fraction value within the range `[low, high]`.
    -   Uses a helper function `findPrimeFraction` to count the number of prime fractions less than or equal to the target value.
    -   Adjusts the bounds `low` and `high` based on the count of prime fractions found during binary search.
    -   Returns the kth smallest prime fraction if found within the range `[low, high]`, otherwise returns an empty vector.

-   (`findPrimeFraction(vector<int> &arr, double target)`) - Finds the number of prime fractions less than or equal to the target value.
    -   Initializes variables `numerator` and `denominator` to store the numerator and denominator of the prime fraction.
    -   Iterates through the list of integers (`arr`) to find the number of prime fractions less than or equal to the target value.
    -   Uses two pointers approach to determine the numerator and denominator for each prime fraction.
    -   Returns a vector containing the count of prime fractions and the corresponding numerator and denominator.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(max(arr)))` - binary search operation has a time complexity of O(log(max(arr))). `findPrimeFraction` iterates through the array once, resulting in O(n) time complexity.
-   Space-Complexity: `O(1)` - The space complexity is constant as the algorithm only uses a fixed amount of additional memory for variables and temporary storage.
