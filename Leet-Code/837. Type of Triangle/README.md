## 3024. Type of Triangle

This problem involved about, you are given a 0-indexed integer array `nums` of size 3 which can form the sides of a triangle.

**Key Insights :**<br/>

1. `Triangle Inequality Theorem`: For three lengths to form a triangle, the sum of any two sides must be greater than the third side.
2. `Side Comparison`: After sorting, we only need to check if the sum of the two smaller sides is greater than the largest side.
3. `Type Determination`:
    - All sides equal → equilateral
    - Exactly two sides equal → isosceles
    - All sides different → scalene

**Algorithm Steps :**<br/>

1. `Sort the Sides`: Arrange the sides in non-decreasing order
2. `Check Validity`: Verify triangle inequality using the sorted sides
3. `Determine Type`:
    - If invalid, return "none"
    - If all sides equal, return "equilateral"
    - If exactly two sides equal, return "isosceles"
    - Otherwise, return "scalene"

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(1)` - since there are exactly 3 elements (constant time).
-   Space-Complexity: `O(1)` - in-place sort.
