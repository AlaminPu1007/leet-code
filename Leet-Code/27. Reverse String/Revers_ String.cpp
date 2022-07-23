// First approach
/*
Runtime: 44 ms, faster than 24.66% of C++ online submissions for Reverse String.
Memory Usage: 23.2 MB, less than 40.38% of C++ online submissions for Reverse String.
*/

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int len = s.size();
        int j = len - 1;
        for (int i = 0; i < (len / 2); i++)
            swap(s[i], s[j--]);
    }
};