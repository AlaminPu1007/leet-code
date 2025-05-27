
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long mostPoints(vector<vector<int>> &questions)
    {
        int n = questions.size();
        vector<long long> dp(n + 1, 0);

        // we fill dp array from reverse manner
        // due to choose the future questions
        for (int i = n - 1; i >= 0; i--)
        {
            dp[i] = max(
                ((questions[i][0]) + (i + questions[i][1] + 1 >= n ? 0 : dp[(i + questions[i][1] + 1)])),
                (i + 1 >= n) ? 0 : dp[i + 1]);
        }

        return dp[0];
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{3, 2}, {4, 3}, {4, 4}, {2, 5}};

    cout << obj.mostPoints(arr) << endl;

    return 0;
}