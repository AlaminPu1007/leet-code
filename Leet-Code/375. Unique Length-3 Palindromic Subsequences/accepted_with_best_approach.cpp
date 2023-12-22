#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        int len = s.size();
        // set<string> st;
        // unordered_map<char, int> right;
        // set<char> left;

        vector<int> firstIndex(26, -1), lastIndex(26, -1);

        // find first & last index of given string
        for (int i = 0; i < len; i++)
        {
            int value = (int)s[i] - 'a';

            if (firstIndex[value] == -1)
                firstIndex[value] = i;

            lastIndex[value] = i;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++)
        {
            if (firstIndex[i] == -1)
                continue;

            set<char> st;

            for (int j = firstIndex[i] + 1; j < lastIndex[i]; j++)
            {
                st.insert(s[j]);
            }
            ans += st.size();
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    string s = "uuuuu";
    cout << obj.countPalindromicSubsequence(s) << endl;
    return 0;
}