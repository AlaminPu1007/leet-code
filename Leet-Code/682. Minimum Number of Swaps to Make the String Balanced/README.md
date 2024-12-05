# 1963. Minimum Number of Swaps to Make the String Balanced

This problem involved about, you are given a 0-indexed string s of even length n. The string consists of exactly n / 2 opening brackets '[' and n / 2 closing brackets ']'.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description)

**Approach :**<br/>

#### Step 1: Identify the Imbalance

-   We need to find the minimum number of swaps required to make the string balanced. An imbalance occurs when there are more closing brackets (`]`) than opening brackets (`[`).

#### Step 2: Count the Imbalance

-   Traverse the string and keep track of the balance between opening and closing brackets:
    1.  `closeCount`: Increment this when a closing bracket (`]`) appears and decrement it when an opening bracket (`[`) appears.
    2.  If `closeCount` becomes positive, it means there are more closing brackets than opening ones at that point.

#### Step 3: Find Maximum Imbalance

-   Track the maximum value of `closeCount` (let's call it `maxCount`), which tells us the largest number of consecutive closing brackets without a matching opening bracket. This will help in determining how many swaps are needed.

#### Step 4: Calculate the Number of Swaps

-   The minimum number of swaps to balance the string is `(maxCount + 1) / 2`. This formula accounts for converting half of the excess closing brackets into matching opening brackets.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - where `n` is the length of the string `s` since we traverse the string once.

-   Space-Complexity: `O(1)` - as only constant space is used for counting.
