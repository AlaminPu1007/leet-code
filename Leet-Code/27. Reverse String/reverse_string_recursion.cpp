/*
Runtime: 30 ms, faster than 65.98% of C++ online submissions for Reverse String.
Memory Usage: 23.2 MB, less than 76.25% of C++ online submissions for Reverse String.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int len = s.size();
        int j = len - 1;
        recursion(s, 0, j);
    };
    // swap method
    void recursion(vector<char> &s, int i, int j)
    {
        if (i >= j)
            return;
        swap(s[i], s[j]);
        recursion(s, ++i, --j);
    }
};