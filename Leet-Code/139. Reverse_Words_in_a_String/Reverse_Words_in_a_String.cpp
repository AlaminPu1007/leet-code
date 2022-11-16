#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> words;
        int len = s.length();
        string ans, a;

        for (int i = 0; i < len; i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                a += s[i];
            }
            else
            {
                if (s[i] == ' ')
                {
                    if (a.size() != 0)
                    {
                        words.push(a);
                        a.clear();
                    }
                }
            }
        }

        if (a.size() > 0)
        {
            words.push(a);
        }

        while (!words.empty())
        {
            ans += words.top();
            ans += ' ';
            words.pop();
        }
        // removed last space
        ans.pop_back();
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.reverseWords("the sky is blue");
    cout << ans << endl;
    return 0;
}