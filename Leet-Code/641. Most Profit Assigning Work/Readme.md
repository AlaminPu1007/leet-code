#

## Problem description

**Approach :**<br/>

1. **Initialization:**

    - Determine the number of tasks `n` and the number of workers `m`.
    - Use a priority queue (max-heap) to store tasks as pairs of (profit, difficulty).

2. **Populate Max-Heap:**

    - For each task, push its profit and difficulty as a pair into the max-heap.

3. **Sort Workers:**

    - Sort the `worker` array in descending order.

4. **Assign Tasks:**

    - Initialize a variable `totalProfit` to accumulate the total profit.
    - Iterate through the sorted `worker` array.
        - While the most difficult task in the max-heap is too hard for the current worker, remove it from the heap.
        - If the current worker can complete the top task in the max-heap, add its profit to `totalProfit`.

5. **Return Result:**
    - Return the total profit.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n * log(n))` - The assignment process involves heap operations and iterating through workers, making the overall time complexity `O(n * log (n) + m * log (m))`.

-   Space-Complexity: `O(n)` - for storing the tasks in the heap.
