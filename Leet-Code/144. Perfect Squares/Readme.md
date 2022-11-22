## 279. Perfect Squares

[Problem link](https://leetcode.com/problems/perfect-squares/)

**Approach :**<br>

-   Question states that add perfects squares to "0" to make it equal to the given target
-   OR
-   Take the given target, subtract perfect squares to make it "0".

#We need to subtract perfect squares optimally to make the target 0<br>
#We need to keep perfect squares as minimum as possible<br>
#But we have many options of perfect squares to subtract<br>
->For target = 18<br>
->we can first subtract =>[1^2 = 1] or [ 2^2 = 4] or [3^2 = 9] or [4^2 = 16]<br>
#If you are thinking that choosing the largest one (16) at the first step would work,<br>
then you just need to observe more carefully that<br>
18 - (4^2) = 2<br>
2 - (1^2) = 1 //Future<br>
1 - (1^2) = 0 //Future [3 STEPS]<br>

#But actually picking (9) at first step would prove to be optimal here<br>
18 - (3^3) = 9<br>
9 - (3^3) = 0 //Future [2 STEPS]<br>

#We are "NOT SURE" if subtracting 1 or 4 or 9 or 16 first would be optimal as we don't know the future results<br>
#So whenever you are not sure which step would be optimal, no need to stress on guessing the optimal one just =><br>
"TRY ALL OPTIONS, THEN CHOOSE THE OPTIMAL ONE"<br>
#So for any given target, just try all the perfect squares you can subtract<br>

```
target(18) => [18 - (1^2) = 17] =>target(17)
target(18) => [18 - (2^2) = 14] => target(14)
target(18) => [18 - (3^2) = 9] => target(9)
target(18) => [18 - (4^2) = 2] => target(2)
```

#Now we have a smaller subproblem, which could be solved using recursion<br>
#so<br>
for target(18) = 1 + min (target(17), target(14), target(9), target(2))<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n * sqrt(m))`
-   Space-Complexity: `O(n)`
