#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string copyStr = "";
        bool res = true;
        long long int n = s.length();
        long long int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                char t = s[i] + 32;

                copyStr.push_back(t);
            }

            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                copyStr.push_back(s[i]);
            }

            else if (s[i] >= '0' && s[i] <= '9')
            {
                copyStr.push_back(s[i]);
            }
        }

        int r = copyStr.size() - 1;

        for (int i = 0; i < copyStr.size(); i++)
        {
            if (copyStr[i] == copyStr[r--])
                continue;
            else
            {
                res = false;
                break;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string str = "0P";
    cout << obj.isPalindrome(str) << endl;
    return 0;
}