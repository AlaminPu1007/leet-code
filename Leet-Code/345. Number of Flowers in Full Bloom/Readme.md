## 2251. Number of Flowers in Full Bloom

This problem involved about, you are given a `0-indexed` 2D integer array flowers, where `flowers[i] = [starti, endi]` means the ith flower will be in full bloom from `start i` to `end i` (inclusive). You are also given a `0-indexed` integer array people of size `n`, where `people[i]` is the time that the ith person will arrive to see the flowers.

# Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-flowers-in-full-bloom/description)

**Approach :**<br/>

1. Initialize two priority queues, start and end, and custom data structure customPeople.
2. Push start and end dates of flowers into their respective priority queues.
3. Sort customPeople based on people's bloom date preference.
4. Initialize count to 0 and res vector.
5. Iterate through sorted customPeople and for each person:
    - While there are flowers with a start date less than or equal to the person's preference, update count and remove flowers from start.
    - While there are flowers with an end date earlier than the person's preference, decrement count and remove flowers from end.
    - Record count in the res vector at the corresponding person's index.
6. Return the res vector as the result.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(N log N + M log M )` - Pushing start and end dates into priority queues: `O(N log N)` for both start and end, where `N` is the number of flowers. Sorting the customPeople array: `O(M log M)`, where M is the number of people.

-   Space-Complexity: `O(N + M)` - Priority queues start and end: O(N). Custom data structure customPeople: O(M)
