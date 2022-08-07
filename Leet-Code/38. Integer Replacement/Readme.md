# 397. Integer Replacement
Problem link: https://leetcode.com/problems/integer-replacement/

**Problem :**<br>

Given a positive integer n, you can apply one of the following operations:<br>

If n is even, replace n with n / 2.<br>
If n is odd, replace n with either n + 1 or n - 1.<br>
Return the minimum number of operations needed for n to become 1.<br>

**Approach :**<br>
- If n is even, replace n with n / 2.<br>
- If n is odd, replace n with either, if left:= (n - 1) / 2  <br>
- if left == 1 or left % 2 == 0, then n -= 1, else n +=1
- return count

**Complexity :**<br>
Time-Complexity: O(log(n))
Space-Complexity: O(1)