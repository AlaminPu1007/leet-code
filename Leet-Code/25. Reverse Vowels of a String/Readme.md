# 345. Reverse Vowels of a String

https://leetcode.com/problems/reverse-vowels-of-a-string/

**Problem :**<br>
Given a string s, reverse only all the vowels in the string and return it.<br>

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.<br>

**Approach :**<br>
i have two approach, let discuss with first one, //another_approach.cpp<br>

**First Solution :**<br>

we to iterate an loop with forward and backward at a time. if forward s[i] and backward s[l] is vowel,<br>
we have to just swap(s[l], s[i]) and so on.<br>

if just decrement len by 1(len--) and increment i by 1(i++), if s[i] and s[len] is not vowel/<br>

finally return s<br>

**Second solution :**<br>

we need an extra space to store vowel that will come from our root string.<br>
first we need to find out a character from given string is vowel or not, if it is vowel just push it into new array.<br>
Then, loop through again root string and find vowel character, and replace this vowel with s[i] = new_array[j--],<br>
where j = new_array.size(), size() for using vector to get length of array.<br>

finally return s<br>
