#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;
        res.push_back({1});

        for (int i = 1; i < numRows; i++)
        {
            vector<int> prvRow = res.back();
            vector<int> newRow = {1};
            for (int j = 1; j < prvRow.size(); j++)
            {
                newRow.push_back(prvRow[j - 1] + prvRow[j]);
            }
            newRow.push_back(1);
            res.push_back(newRow);
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    int n = 5;
    vector<vector<int>> res = obj.generate(n);

    for (auto item : res)
    {
        for (auto it : item)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}