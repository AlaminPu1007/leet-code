
# 66. Plus One
https://leetcode.com/problems/plus-one/

** Problem :**

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. <br>
The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.<br>

Increment the large integer by one and return the resulting array of digits.<br>

** Solution :**

The approach of this problem is that, whenever we get a digit is less than p, we just increment of its value by 1, and break our entire iteration.<br>
If, the value is greater than or equal 9, we put 0 of this position. <br>

We use an counter variable to check, all element(array of value) is 9 or not. if any count is present, then, all entire array element is not 9.<br>
if all element is equal to 9, we just insert 1, at begin of the array.(Array size will be increased by 1)<br> 

insert(): Inserts new elements into the vector at a particular position. ts time complexity is O(N + M) <br>
where N is the number of elements inserted and M is the number of the elements moved.<br>

** Complexity : ** 

 Time complexity : O(N) <br>