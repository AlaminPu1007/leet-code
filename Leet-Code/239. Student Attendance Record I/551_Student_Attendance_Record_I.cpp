/*
    1) The student was absent ('A') for strictly fewer than 2 days total.
    2) The student was never late ('L') for 3 or more consecutive days.
    then return false
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkRecord(string s)
    {
        int len = s.size();
        int absent = 0, late = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'A')
            {
                absent++;
                if (absent >= 2)
                    return false;
            }
            if (s[i] == 'L')
            {
                late++;
                if (late >= 3)
                    return false;
            }
            else
                late = 0;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    string s = "PPALLP";
    cout << obj.checkRecord(s) << endl;
    return 0;
}