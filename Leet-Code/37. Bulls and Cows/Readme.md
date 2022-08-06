
# 299. Bulls and Cows
Problem link : https://leetcode.com/problems/bulls-and-cows/

**Approach : **<br>
- check matching character from both given string, if its true then cont bull = bull + 1
- if character is not matching, then count each string character frequency
- then loop through 10, (to digit 0-9), and count cow += min(freq_secret[i], freq_guess[i])
- then make string result = to_string(bull) + "A" + to_string(cow) + "B"
- finally return result

**Complexity :**<br>
Time-complexity: O(n)
Space-complexity: O(1)//we using const number of space
