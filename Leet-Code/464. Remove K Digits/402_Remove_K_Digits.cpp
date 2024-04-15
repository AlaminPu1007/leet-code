#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        // it will hold char as a monotonically increasing order
        // ex: 1,5,9,10,11
        stack<char> st;

        for (int i = 0; i < num.length(); i++)
        {
            while (k > 0 && !st.empty() && st.top() > num[i])
            {
                k--;
                st.pop();
            }

            if (st.empty() && num[i] == '0')
                continue;

            st.push(num[i]);
        }

        string res = "";

        // if string is already in increasing order
        // ex: 12345
        while (k && !st.empty())
        {
            st.pop();
            k--;
        }

        while (!st.empty())
        {
            res.push_back(st.top());
            st.pop();
            k--;
        }

        // Reverse the result string to get the correct order
        reverse(res.begin(), res.end());

        return res.length() ? res : "0";
    }
};

int main(void)
{
    Solution obj;
    string num = "12345";
    int k = 2;
    cout << obj.removeKdigits(num, k) << endl;
    return 0;
}