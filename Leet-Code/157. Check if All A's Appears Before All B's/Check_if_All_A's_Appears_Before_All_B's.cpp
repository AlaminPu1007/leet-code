#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkString(string s)
    {

        return is_sorted(s.begin(), s.end());
    }
};

int main(void)
{
    Solution obj;
    bool res = obj.checkString("aaabb");
    cout << res << endl;
    return 0;
}