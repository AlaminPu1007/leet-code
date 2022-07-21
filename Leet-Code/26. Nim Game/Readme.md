# 292. Nim Game

https://leetcode.com/problems/nim-game/

**Solution :**<br>
You can always win a Nim game if the number of stones nn in the pile is not divisible by 44.<br>

**Reasoning :**<br>

Let us think of the small cases. It is clear that if there are only one, two, or three stones in the pile, and it is <br>your turn, you can win the game by taking all of them. Like the problem description says, if there are exactly <br>four stones in the pile, you will lose. Because no matter how many you take, you will leave some stones behind for <br>your opponent to take and win the game. So in order to win, you have to ensure that you never reach the situation <br>where there are exactly four stones on the pile on your turn.<br>

Similarly, if there are five, six, or seven stones you can win by taking just enough to leave four stones for your <br>opponent so that they lose. But if there are eight stones on the pile, you will inevitably lose, because <br>regardless whether you pick one, two or three stones from the pile, your opponent can pick three, two or one stone <br>to ensure that, again, four stones will be left to you on your turn.<br>

It is obvious that the same pattern repeats itself for n=4,8,12,16,\dotsn=4,8,12,16,…, basically all multiples of 44.<br>

link of this discussion: https://leetcode.com/problems/nim-game/solution/
