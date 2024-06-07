#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        int n = s.size();
        int count = 0;

        string ans = "", tempString = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                count++;
                tempString += s[i];
            }
            else if (s[i] == ')' && count)
            {
                count--;
                tempString += s[i];
            }
            else if (s[i] != ')')
                tempString += s[i];
        }

        for (int i = tempString.size() - 1; i >= 0; i--)
        {
            if (tempString[i] == '(' && count)
            {
                count--;
                continue;
            }
            ans += tempString[i];
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string s = "lee(t(c)o)de)";
    cout << obj.minRemoveToMakeValid(s) << endl;
    return 0;
}