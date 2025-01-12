# 670. Maximum Swap

This problem involved about, you are given an integer num. You can swap two digits at most once to get the maximum valued number.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/maximum-swap/description)

**Approach :**<br/>

#### Step 1: Convert the Integer to String

-   The input integer is first converted to a string to easily access and manipulate individual digits.

#### Step 2: Track the Maximum Suffix Digits

-   Iterate from the right to left of the string and maintain the maximum digit found in the suffix (from the current position to the end). This helps in identifying possible digits to swap with.

#### Step 3: Identify Possible Swap

-   After tracking the maximum digits in the suffix, check from the left to see if there's any digit that is smaller than the maximum suffix. If found, this indicates the optimal swap.
-   Swap the current digit with the largest suffix digit.

#### Step 4: Return the Maximum Value

-   If no better swap is found, return the original number. Otherwise, return the new number after performing the optimal swap.

#### Core Logic

-   The code first builds a list (`maxSuffix`) where each element is the maximum digit to the right of (or including) the current index.
-   It then checks the digits from the left to see if any smaller digit can be swapped with a larger one found in the suffix.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - The entire algorithm runs in linear time. We traverse the string twice, once to build the suffix array and once to find the optimal swap.

-   Space-Complexity: `O(n)` - We use extra space to store the `maxSuffix` array, which holds `n` elements (one for each digit). Therefore, the space complexity is linear in terms of the number of digits in the input number.