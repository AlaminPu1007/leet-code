#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getHappyString(int n, int k)
    {
        vector<int> visit(n, false);
        vector<string> res;

        Solve("", n, res);

        if (res.size() < k)
            return "";

        return res[k - 1];
    }

private:
    void Solve(string curStr, int n, vector<string> &res)
    {
        if (curStr.size() == n)
        {
            res.push_back(curStr);
            return;
        }

        for (int i = 'a'; i <= 'c'; i++)
        {
            if (curStr.size() && curStr.back() == i)
                continue;

            curStr.push_back(i);
            Solve(curStr, n, res);
            curStr.pop_back();
        }
    }
};

int main(void)
{
    Solution obj;
    cout << obj.getHappyString(3, 9) << endl;

    return 0;
}