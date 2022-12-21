## Daily Temperatures

[Open Problem](https://leetcode.com/problems/daily-temperatures/description/)

**Complexity Analysis Stack approach:**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`

it seems as if time complexity is n^2 but it is not. in the example shown in this video if u count no of comparisons in each iteration by both methods (without stack and with stack) u will find that no of comparisons are same in both <br>methods. but lets take your example only and modify it a little.<br>
lets say your array is `[ 4, 8, 10, 12, 6, 5]` <br>

-   this is how nested loop approach will look like -

4 will not be compared with any element then 8 will be compared with 4 then 10 will be compared with 8 then 12 will be compared with 10 then 6 will be compared with 12, 10, 8, and 4. then 5 will again be compared with 6, 12, 10, 8, 4
so u see 6 and 5 both are compared with 12 10 8 and 4 which is to say that same elements got compared with 6 as well as 5.<br>

and this is how stack approach will look like <br>

4 is pushed then 8 is pushed then 10 is pushed then 12 is pushed then for 6 - 12, 10, 8, are compared and popped and then 6 is pushed <br>
and now for 5 - only 6 is compared and popped and then 5 is pushed unlike the other approach where 5 was also compared with all other elements. <br>

so u see what it means by the statement that each element is popped and pushed only once........<br>

at most for n elements there will be 2n comparisons with this stack approach so its time complexity is `O(n)`<br>

u were mostly right just didn't check every different case. in this particular example(shown in the video, comparisons using both approach will be same) but this is not true with every case.<br>

hope your doubt gets cleared now.... <br>

and for such more problems check out the sliding window maximum problem which involves use of Deque.
in that question same type of approach is used where it seems that time complexity is n^2 but max comparisons will be <br>2n which tells us that time complexity is of `O(n)`.<br>
