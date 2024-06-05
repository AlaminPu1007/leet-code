#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int scoreOfString(string s)
    {
        int n = s.size();
        int res = 0;

        for (int i = 0; i < n - 1; i++)
            res += abs(s[i] - s[i + 1]);

        return res;
    }
};

int main(void)
{
    Solution obj;
    string str = "hello";
    cout << obj.scoreOfString(str) << endl;
    return 0;
}