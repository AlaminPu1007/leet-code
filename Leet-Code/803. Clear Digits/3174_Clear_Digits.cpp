#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string clearDigits(string s)
    {
        string res = "";
        int n = s.size();
        stack<char> st;

        for (int i = 0; i < n; i++)
        {

            if (s[i] >= 'a' && s[i] <= 'z')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size())
                    st.pop();
            }
        }

        while (st.size())
        {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "em992jh8u3m6g7f8yegczvhy94bt";

    cout << obj.clearDigits(s) << endl;

    return 0;
}