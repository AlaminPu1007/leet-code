# 2818. Apply Operations to Maximize Score

This problem involved about, you are given an array `nums` of n positive integers and an integer k.
Initially, you start with a score of 1. You have to maximize your score by applying the following operation at most k times:

**Approach :**<br/>

1. `Prime Factor Scores`: Each number's "score" is determined by its number of distinct prime factors. This helps in determining the "importance" of each element in the array.
2. `Monotonic Stack`: Used to find the nearest greater element to the left and right for each element in the array, which helps in determining the boundaries where each element is the maximum in its `subarray`.
3. `Max-Heap`: Used to process elements in descending order, ensuring that we always handle the largest available elements first to maximize the score.
4. `Modular Arithmetic`: Ensures that the results are within the constraints of the given modulus to prevent overflow and comply with problem requirements.

**Algorithm Steps :**<br/>

1. `Compute Prime Factors`: For each number in the array, compute its score based on the number of distinct prime factors.
2. `Determine Boundaries`: Use a monotonic stack to find the left and right boundaries where each element is the maximum in its `subarray` based on the prime factor scores.
3. `Process Elements`: Use a max-heap to process elements in descending order. For each element, compute the number of valid operations it can contribute to the score and update the result accordingly.
4. `Modular Exponentiation`: Efficiently compute large powers under modulo using binary exponentiation.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * sqrt(m)) + O(n * log(n))` - where n is the number of elements in the array and m is the maximum value in the array. This is because for each number, we check divisibility up to its square root. as each insertion and extraction from the heap takes `O(log(n))` time and there are n elements.
-   Space-Complexity: `O(n)` - for the stack and heap storage. For left and right boundaries.
