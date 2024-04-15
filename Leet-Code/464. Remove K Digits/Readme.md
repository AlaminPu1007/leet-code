## 402. Remove K Digits

This problem involved about, given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/remove-k-digits/description/)

**Approach :**<br/>

1. `Monotonically Increasing Stack`:

    - Use a stack to maintain a monotonically increasing sequence of digits from the input number.
    - Iterate through each digit of the input number:
        - While the current digit is less than the top of the stack and there are still removals `(k > 0)`, pop elements from the stack.
        - Push the current digit onto the stack.
        - Skip leading zeros by not pushing them onto the stack if it's empty.

2. `Remove Remaining Elements from Stack`:

    - After processing the entire input number, if there are still removals to be made `(k > 0)` and the stack is not empty, continue popping elements from the stack until `(k > 0)`.

3. `Construct Resulting String`:

    - Pop elements from the stack and append them to the result string.
    - Reverse the result string to get the correct order.

4. `Handle Edge Cases`:
    - If the resulting string is empty, return "0" to indicate that all digits have been removed.

**Complexity Analysis:**<br/>

-   Time-Complexity: `O(n)` - The algorithm iterates through each digit once, resulting in `(O(n)` time complexity.
-   Space-Complexity: `O(n)` - We are using an stack and `res` that required extra spaces.
