#include <bits/stdc++.h>
using namespace std;

class Solution
{
    string str;

public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        DFS(0, 0, n, res);
        return res;
    }

private:
    void DFS(int openP, int closeP, int n, vector<string> &res)
    {
        // if it's a valid answer, then need put it into ans
        if ((n == openP) && (n == closeP))
        {
            res.push_back(str);
            return;
        }

        // for open parenthesis
        if (openP < n)
        {
            str.push_back('(');
            DFS(openP + 1, closeP, n, res);
            // removed added item after backtracking
            str.pop_back();
        }

        // for close parenthesis
        // it will be valid if it's less than open parenthesis
        if (closeP < openP)
        {
            str.push_back(')');

            DFS(openP, closeP + 1, n, res);
            // removed added item after backtracking
            str.pop_back();
        }
    }
};

int main(void)
{
    Solution obj;
    vector<string> ans = obj.generateParenthesis(2);
    cout << "Res is -> ";
    for (auto item : ans)
        cout << item << " ";
    return 0;
}