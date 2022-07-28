# 80. Remove Duplicates from Sorted Array II

Problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

**Approach :**<br>
we initialize count := 2<br>
Then,<br>
for i := 2 to len - 1<br>
if(arr[i] != arr[count - 2])<br>
arr[count++] := arr[i]<br>

**Complexity :**<br>
T.C: O(n)
S.C: O(1)
