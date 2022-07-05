
# 242. Valid Anagram

https://leetcode.com/problems/valid-anagram/

** Problem : **

Given two strings s and t, return true if t is an anagram of s, and false otherwise.<br>

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, <br>
typically using all the original letters exactly once.<br>

** Solution : **

First we have to check each string has same length or not. If not then return false <br>

Else, count first string each character frequency and then decrement next string each character frequency from previous string frequency.<br>

if all frequency remain 0, then return true, other wise return false.<br>

** Complexity : **

Time complexity: O(n) + O(m) // n = first string lenght, and m = next string length<br>

# Happy - coding