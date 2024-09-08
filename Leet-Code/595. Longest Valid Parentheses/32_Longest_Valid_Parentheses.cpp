#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int n = s.size();
        stack<int> st;
        st.push(-1);

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                // removed top most element
                st.pop();

                if (st.empty())
                    st.push(i);
                else
                    res = max(res, i - st.top());
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string str = "((()()))())";
    cout << obj.longestValidParentheses(str) << endl;
    return 0;
}