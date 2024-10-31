# 726. Number of Atoms

This problem involved about, given a string formula representing a chemical formula, return the count of each atom.<br/>

The atomic element always starts with an uppercase character, then zero or more lowercase letters, representing the name.

## Problem description

For better problem description, please visit [LeetCode Page](https://leetcode.com/problems/number-of-atoms/description/)

**Approach :**<br/>

The goal is to parse a chemical formula and count the number of each type of atom in the formula. The formula can contain nested sub-formulas enclosed in parentheses, and multiplicities that indicate how many times the sub-formula should be counted.

**Algorithm :**<br/>

1. **Initialize the main function `countOfAtoms`**:

    - Use a stack to manage the nested sub-formulas and their atom counts.
    - Iterate through the formula character by character.

2. **Parsing the Formula**:

    - **Open Parenthesis `(`**: Push a new empty map onto the stack to start a new scope.

    - **Close Parenthesis `)`**: Pop the top map from the stack, multiply its counts by the following multiplicity (if any), and merge it back into the map on the top of the stack.

    - **Atom Parsing**:
        - Parse the atom name (which may be followed by lowercase letters).
        - Parse the multiplicity (if any) following the atom name.
        - Update the top map on the stack with the atom and its count.

3. **Constructing the Result**:

    - Convert the final atom counts from the top map of the stack into a sorted result string.
    - Format the result string such that atoms are sorted lexicographically, and atoms with a count of 1 do not include the count in the string.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n^2)` - we need to revisit the atoms in the nested formula to add the count to the current formula, in the worst case, the time complexity of the stack operations will be `O(n^2)`.

-   Space-Complexity: `O(n)` - The space used by the stack will be `O(n)`.