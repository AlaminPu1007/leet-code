#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findChampion(int n, vector<vector<int>> &edges)
    {
        vector<int> inDeg(n, 0);

        for (auto item : edges)
        {
            int v = item[1];
            inDeg[v]++;
        }

        bool flag = false;
        int res = -1;

        for (int i = 0; i < n; i++)
        {
            if (flag && inDeg[i] == 0)
                return -1;

            if (inDeg[i] == 0)
            {
                flag = true;
                res = i;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> edges = {{1, 0}};
    cout << obj.findChampion(2, edges) << endl;
    return 0;
}