#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int n = s.size(), m = part.size();
        stack<char> st;

        string res = "";

        for (int i = 0; i < n; i++)
        {
            // insert into stack
            st.push(s[i]);

            if (st.size() >= m && checkPart(st, part))
            {
                // removed the matching part from stack
                for (int j = 0; j < m; j++)
                    st.pop();
            }
        }

        while (st.size())
        {
            res = st.top() + res;
            st.pop();
        }

        return res;
    }

private:
    bool checkPart(stack<char> &st, string &part)
    {
        // make a copy of stack
        stack<char> copySt = st;
        int n = part.size();

        // iterate in reverse order due to the stack behaviour.
        // stack hold data in reverse manner
        for (int i = n - 1; i >= 0; i--)
        {
            if (part[i] != copySt.top())
                return false;

            copySt.pop();
        }

        return true;
    }
};

int main(void)
{
    Solution obj;

    string s = "daabcbaabcbc", part = "abc";
    cout << obj.removeOccurrences(s, part) << endl;

    return 0;
}