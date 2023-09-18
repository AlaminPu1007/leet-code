#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkValidString(string s)
    {
        int len = s.size();
        stack<char> openBracket, startSign;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(')
            {
                openBracket.push(i);
            }
            else if (s[i] == '*')
            {
                startSign.push(i);
            }
            else if (s[i] == ')')
            {
                if (!openBracket.empty())
                    openBracket.pop();
                else if (!startSign.empty())
                    startSign.pop();
                else
                    return false;
            }
        }

        while (!openBracket.empty() && !startSign.empty())
        {
            int valueOfOpenBracket = openBracket.top();
            openBracket.pop();

            int valueOfSign = startSign.top();
            startSign.pop();

            if (valueOfOpenBracket > valueOfSign)
                return false;
        }

        if (!openBracket.empty())
            return false;

        return true;
    }
};

int main(void)
{
    Solution obj;
    string s = "(*)";
    cout << obj.checkValidString(s) << endl;
    return 0;
}