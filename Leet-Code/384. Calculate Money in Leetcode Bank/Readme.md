## 1716. Calculate Money in LeetCode Bank

This problem involved about, Hercy wants to save money for his first car. He puts money in the Leet-code bank every day.
He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.

# Problem description

For better problem description, please visit [LeetCode Pages](https://leetcode.com/problems/calculate-money-in-leetcode-bank/description)

**Approach :**<br/>

1. initialize `count = 0` & `res = 0`
2. iterate over the `n` until `n` become to less than 0
    - for each iteration of `n`, we calculate `res += count + i` for every 7 days
    - subtraction n by 7 and increment counter by 1
3. return `res`

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n)` - iterate over the n and calculate money has required `O(n)`,
-   Space-Complexity: `O(1)`
