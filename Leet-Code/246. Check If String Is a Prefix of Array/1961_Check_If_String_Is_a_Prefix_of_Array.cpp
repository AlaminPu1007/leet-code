#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {
        string ans = "";
        for (auto word : words)
        {
            ans += word;
            if (ans == s)
                return true;
            if (ans.size() > s.size())
                return false;
        }
        return false;
    }
};

int main(void)
{
    Solution obj;
    string s = "iloveleetcode";
    vector<string> words = {"i", "love", "leetcode", "apples"};
    cout << obj.isPrefixString(s, words) << endl;
    return 0;
}