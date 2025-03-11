#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canBeValid(string s, string locked)
    {
        int n = s.size();

        if (n % 2 == 1)
            return false;

        stack<int> locked_st, un_locked;

        for (int i = 0; i < n; i++)
        {
            if (locked[i] == '0')
                un_locked.push(i);

            else if (s[i] == '(')
                locked_st.push(i);

            // handle for close parenthesis
            else
            {
                if (locked_st.size())
                    locked_st.pop();

                else if (un_locked.size())
                    un_locked.pop();

                else
                    return false;
            }
        }

        while (locked_st.size() && un_locked.size() && locked_st.top() < un_locked.top())
        {
            locked_st.pop();
            un_locked.pop();
        }

        if (locked_st.size())
            return false;

        return true;
    }
};

int main(void)
{
    Solution obj;
    string s = "))()))", locked = "010100";
    cout << obj.canBeValid(s, locked) << endl;
    return 0;
}