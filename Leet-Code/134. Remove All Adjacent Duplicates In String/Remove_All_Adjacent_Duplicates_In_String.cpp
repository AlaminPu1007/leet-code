#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        int len = s.size();
        string ans;
        for (int i = 0; i < len; i++)
        {
            if (ans.size() && ans.back() == s[i])
            {
                ans.pop_back();
            }
            else
            {
                // push element inside ans string
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.removeDuplicates("aaaaaa");
    cout << "Ans is :" << ans << endl;
    return 0;
}