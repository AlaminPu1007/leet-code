#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAcronym(vector<string> &words, string s)
    {
        int w_len = words.size(), len = s.size();

        if (w_len != len || w_len == 0 || len == 0)
            return false;

        string res = "";
        for (auto item : words)
            res += item[0];

        return s == res;
    }
};

int main(void)
{
    Solution obj;
    vector<string> str = {"alice", "bob", "charlie"};
    string s = "abc";
    cout << obj.isAcronym(str, s) << endl;
    return 0;
}