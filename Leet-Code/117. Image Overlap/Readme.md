## 835. Image Overlap

[Problem-link](https://leetcode.com/problems/image-overlap/)

**Approach :**<br>
when two images overlap , there positions difference will always be same on the positions they will overlap.<br>

```
suppose , you have two matrix - >
 IMG 1      IMG 2
  1 1 0       0 0 0
  0 1 0       0 1 1
  0 1 0       0 0 1

v1 = [ {0,0} , {0,1} , {0,2} , {1,0} , {1,1} , {2,1} ]
v2 = [ {1,1} , {1,2} , {2,2} ]

{0,0}  - {1,1}  = { -1 , -1 }
{0,1}  - {1,2}  = { -1 , -1 }
{0,2}  - {2,2}  = { -1 , -1 }

and count of { -1 , -1 } is the max overlap = 3 .
```

**References :**<br>
[Visit](https://leetcode.com/problems/image-overlap/discuss/2747789/C%2B%2B-oror-Easy-Solution-oror-Beginner-Friendly)
