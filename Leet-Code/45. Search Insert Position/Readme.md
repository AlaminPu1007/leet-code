# 35. Search Insert Position

Problem link: https://leetcode.com/problems/search-insert-position/

**Problem :**<br>
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.<br>

You must write an algorithm with O(log n) runtime complexity.<br>

**Approach ::**<br>

- first approach with bs(binary-search).

```
low = 0 , high = len-1
while low <= high
mid := low + high / 2

if arr[mid] = target
return mid

else if arr[mid] < target
low = mid + 1

else high = mid - 1

//if target value is not found
return low
```

- second approach, we have to search target value linearly

```
for  i = 0 to len - 1
     if nums[i] == target || target < nums[i]
        return i;

// value is not found
 return len;

```

**Complexity:**<br>

1. First Approach<br>

Time-Complexity: O(log(n))<br>
space-Complexity: O(1)<br>

2. Second Approach<br>

Time-Complexity: O(n)<br>
space-Complexity: O(1)<br>
