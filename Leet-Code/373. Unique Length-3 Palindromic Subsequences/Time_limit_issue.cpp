#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        int len = s.size();
        set<string> st;
        unordered_map<char, int> right;
        set<char> left;

        // count frequency of given string
        for (auto item : s)
            right[item]++;

        for (int i = 0; i < len; i++)
        {
            right[s[i]]--;
            if (right[s[i]] == 0)
                right.erase(s[i]);

            for (int j = 0; j < 26; j++)
            {
                char alphabet = char(97 + j);
                if (left.find(alphabet) != left.end() && right.find(alphabet) != right.end())
                {

                    string value = "";
                    value += s[i];
                    value += alphabet;

                    st.insert(value);
                }
            }
            // insert into left set data-structure
            left.insert(s[i]);
        }

        return st.size();
    }
};