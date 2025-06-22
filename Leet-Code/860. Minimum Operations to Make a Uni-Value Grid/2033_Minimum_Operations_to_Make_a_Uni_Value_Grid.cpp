#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<vector<int>> &grid, int x)
    {
        int n = grid.size(), m = grid[0].size();
        int res = INT_MAX;
        vector<int> arr;

        int totalSum = 0;

        for (auto item : grid)
        {
            for (auto it : item)
            {
                totalSum += it;
                arr.push_back(it);

                if (it % x != (grid[0][0] % x))
                    return -1;
            }
        }

        // now sort the array
        sort(arr.begin(), arr.end());
        int prefixSum = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            int cost_left = arr[i] * i - prefixSum;
            int cost_right = totalSum - prefixSum - (arr[i] * (arr.size() - i));
            int operations = (cost_left + cost_right) / x;

            res = min(res, operations);

            prefixSum += arr[i];
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{2, 4}, {6, 8}};

    cout << obj.minOperations(arr, 2) << endl;

    return 0;
}