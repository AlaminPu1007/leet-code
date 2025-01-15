#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSatisfaction(vector<int> &arr)
    {
        int n = arr.size();
        int cur_time = 1;
        // sort the array  to get maximum result as much as possible
        sort(arr.begin(), arr.end());

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));

        return DFS(arr, 0, cur_time, dp);
    }

private:
    int DFS(vector<int> &arr, int i, int cur_time, vector<vector<int>> &dp)
    {
        if (i >= arr.size())
            return 0;

        if (dp[i][cur_time] != -1)
            return dp[i][cur_time];

        int include = (arr[i] * cur_time) + DFS(arr, i + 1, cur_time + 1, dp);
        int exclude = DFS(arr, i + 1, cur_time, dp);

        return dp[i][cur_time] = max(include, exclude);
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 3, 2};
    cout << obj.maxSatisfaction(arr) << endl;
    return 0;
}