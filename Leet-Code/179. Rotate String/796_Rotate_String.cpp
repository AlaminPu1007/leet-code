#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        return s.length() == goal.length() && (s + s).find(goal) != string::npos; // string::npos-> It actually means until the end of the string.
    }
};

int main(void)
{
    Solution obj;
    string s = "abcde", goal = "cdeab";
    bool res = obj.rotateString(s, goal);
    cout << res << endl;
    return 0;
}