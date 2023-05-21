
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minLength(string s)
    {
        stack<char> stk;
        for (char ch : s)
        {
            if (ch == 'B' && !stk.empty() && stk.top() == 'A')
            {
                stk.pop();
            }
            else if (ch == 'D' && !stk.empty() && stk.top() == 'C')
            {
                stk.pop();
            }
            else
            {
                stk.push(ch);
            }
        }

        return stk.size();
    }
};

int main(void)
{
    Solution obj;
    cout << obj.minLength("ABFCACDB") << endl;

    return 0;
}
