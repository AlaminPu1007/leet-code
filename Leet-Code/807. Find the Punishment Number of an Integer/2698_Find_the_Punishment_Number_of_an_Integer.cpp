#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int punishmentNumber(int n)
    {
        int res = 0;

        for (int i = 1; i <= n; i++)
        {
            string curStr = to_string(i * i);
            vector<vector<bool>> dp(curStr.size() + 1, vector<bool>(i + 1, false));

            if (isValidPunishment(0, 0, curStr, i, dp))
                res += (i * i);
        }

        return res;
    }

private:
    bool isValidPunishment(int idx, int curSum, string str, int target, vector<vector<bool>> &dp)
    {
        if (idx > str.size() || curSum > target)
            return false;

        if (idx == str.size() && curSum == target)
            return true;

        if (dp[idx][curSum])
            return dp[idx][curSum];

        // split all possible way
        // ex: 1296,
        for (int j = idx; j < str.size(); j++)
        {
            string subStr = str.substr(idx, j - idx + 1);
            int addend = stoi(subStr);

            if (isValidPunishment(j + 1, curSum + addend, str, target, dp))
                return true;
        }

        return dp[idx][curSum] = false;
    }
};

int main(void)
{
    Solution obj;
    int n = 10;

    cout << obj.punishmentNumber(n) << endl;

    return 0;
}