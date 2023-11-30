#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &nums)
    {
        int n = nums.size();
        vector<int> res;

        queue<pair<int, int>> q;

        q.push({0, 0});

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;

            res.push_back(nums[row][col]);
            q.pop();

            if (col == 0 && row + 1 < n)
                q.push({row + 1, col});

            if (col + 1 < nums[row].size())
                q.push({row, col + 1});
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{1, 2, 3, 4, 5}, {6, 7}, {8}, {9, 10, 11}, {12, 13, 14, 15, 16}};
    vector<int> res = obj.findDiagonalOrder(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}