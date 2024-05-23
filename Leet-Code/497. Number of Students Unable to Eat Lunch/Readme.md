## 1700. Number of Students Unable to Eat Lunch

This problem involved about, the school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.<br/>

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/)

**Approach :**<br/>

1. `Counting Sandwich Preferences`: Count the number of students who prefer each type of sandwich using an unordered map.

2. `Iterate Through Sandwiches`: Iterate through the sandwiches array:

    - If there are students left who prefer the current type of sandwich, decrement their count and reduce the remaining students count.
    - If no student prefers the current sandwich type, return the count of remaining students as they cannot be satisfied.

3. `Return Remaining Students Count`: After iterating through all sandwiches, return the count of remaining students.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - counting the students required `O(n)` times.
-   Time-Complexity: `O(1)` - We are not using any extra spaces
