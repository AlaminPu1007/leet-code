#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &nums)
    {
        int n = nums.size();
        vector<int> res;
        int m = 0;
        unordered_map<int, vector<int>> Map;

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                int diagonal = i + j;
                Map[diagonal].push_back(nums[i][j]);
            }
        }

        int count = 0;

        while (Map.find(count) != Map.end())
        {
            for (auto item : Map[count])
                res.push_back(item);

            count++;
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