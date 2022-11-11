#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        int len = digits.length();

        if (!len)
            return {};

        map<char, string> Map = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
        };

        vector<string> ans;
        // Called recursive method
        Solve(0, digits, Map, "", ans);

        return ans;
    }
    // called recursive approach
    void Solve(int idx, string &digits, map<char, string> &Map, string db, vector<string> &res)
    {

        // base case
        if (idx == digits.size())
        {
            res.push_back(db);
            return;
        }

        // get digit wise string from map
        string value = Map[digits[idx]];

        for (int i = 0; value[i] != '\0'; i++)
        {
            db += value[i];

            Solve(idx + 1, digits, Map, db, res);
            // after push an item remove it whenever recursion is return
            // other wise it will carry previous value
            db.pop_back();
        }
    }
};

int main(void)
{
    Solution obj;
    vector<string> ans = obj.letterCombinations("23");

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}