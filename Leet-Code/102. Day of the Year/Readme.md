## 1154. Day of the Year

[Problem link](https://leetcode.com/problems/day-of-the-year/)

**Problem :**<br>
Given a string date representing a Gregorian calendar date formatted as YYYY-MM-DD, return the day number of the year.<br>

**Approach :**<br>

- split Year,month,day from given string and convert it integer
- make february leap year wise month value`(28 or 29)`
- loop through month-1 and add `res += day_of_month[i]`
- finally return `res + day`

**Complexity :**<br>

- Time-Complexity: `O(n)`
- Space-Complexity: `O(1)`
