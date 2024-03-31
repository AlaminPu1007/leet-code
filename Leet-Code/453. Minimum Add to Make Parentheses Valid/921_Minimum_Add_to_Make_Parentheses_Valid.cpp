#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int n = s.size();
        stack<char> st;

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size() && s[i] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    res++;
                }
            }
        }

        return res + st.size();
    }
};

int main(void)
{
    Solution obj;
    string s = "(((";
    cout << obj.minAddToMakeValid(s) << endl;
    return 0;
}
