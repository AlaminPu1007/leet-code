#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int n = s.size(), m = t.size();
        stack<char> st, tt;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#' && !st.empty())
            {
                st.pop();
            }
            else if (s[i] != '#')
            {
                st.push(s[i]);
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (t[i] == '#' && !tt.empty())
            {
                tt.pop();
            }
            else if (t[i] != '#')
            {
                tt.push(t[i]);
            }
        }

        while (!st.empty() && !tt.empty())
        {
            if (st.top() != tt.top())
                return false;

            st.pop();
            tt.pop();
        }

        if (st.size() != tt.size())
            return false;

        return true;
    }
};

int main(void)
{
    Solution obj;
    string s = "y#fo##f", t = "y#f#o##f";
    cout << obj.backspaceCompare(s, t) << endl;
    return 0;
}