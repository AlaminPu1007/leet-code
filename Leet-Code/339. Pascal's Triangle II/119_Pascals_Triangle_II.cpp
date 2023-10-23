#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> res;
        res.push_back({1});

        for (int i = 1; i <= rowIndex; i++)
        {
            vector<int> prvItem = res.back();
            vector<int> ans;
            ans.push_back(1);

            for (int j = 1; j < prvItem.size(); j++)
            {
                ans.push_back(prvItem[j - 1] + prvItem[j]);
            }
            ans.push_back(1);
            res.push_back(ans);
        }
        return res[rowIndex];
    }
};

int main(void)
{
    Solution obj;
    vector<int> res = obj.getRow(10);

    for (auto item : res)
    {
        cout << item << " ";
    }
    return 0;
}