#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        int len = s.length();
        int top = -1, c = 0;
        char stack[len];

        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stack[++top] = s[i];
            }
            else
            {
                // cout << top << stack[top] << endl;
                if (top == -1)
                    return false;

                if ((s[i] == ')' && stack[top] == '(') || (s[i] == ']' && stack[top] == '[') || (s[i] == '}' && stack[top] == '{'))
                {
                    // cout << top << s[i] << endl;
                    top--;
                }

                else
                    return false;
            }
        }

        return top == -1 ? true : false;
    }
};

int main(void)
{
    Solution obj;
    string s = "()[]{}";
    bool res = obj.isValid(s);
    cout << res << endl;
    return 0;
}