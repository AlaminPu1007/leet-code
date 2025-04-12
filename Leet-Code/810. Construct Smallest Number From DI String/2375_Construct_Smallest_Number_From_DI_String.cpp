#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string smallestNumber(string pattern)
    {
        int n = pattern.size();
        string res = "";
        stack<int> st;

        for (int i = 0; i <= n; i++)
        {
            // insert current number + 1 into stack
            st.push(i + 1);

            while (st.size() && (i == n || pattern[i] == 'I'))
            {
                res += (st.top() + '0');
                st.pop();
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "IIIDIDDD";

    cout << obj.smallestNumber(s) << endl;

    return 0;
}