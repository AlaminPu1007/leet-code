#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int count = 0, L = 0, R = 0;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'L')
                L++;
            else
                R++;

            if (L == R)
                count++;
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.balancedStringSplit("RLRRLLRLRL");
    cout << res << endl;
    return 0;
}