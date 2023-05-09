#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int partitionString(string s)
    {
        // put res = 1,(if s = "aba", then out put will be 1, but for last char `a` we need to put  extra 1 in res)
        int res = 1, len = s.size();
        // it will hold at most 26 english alphabet
        // the space complexity for this set will be O(1)
        set<char> st;

        for (int i = 0; i < len; i++)
        {
            if (st.find(s[i]) != st.end())
            {
                st.clear();
                res++;
            }
            st.insert(s[i]);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    string s = "abacaba";
    int res = obj.partitionString(s);
    cout << res << endl;
    return 0;
}