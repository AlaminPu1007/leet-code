#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumImportance(int n, vector<vector<int>> &roads)
    {
        vector<int> inDeg(n, 0);

        // count the degree of each node
        for (auto item : roads)
        {
            inDeg[item[0]]++;
            inDeg[item[1]]++;
        }

        // sort the degree to get the maximum result
        sort(inDeg.begin(), inDeg.end());

        long long res = 0, count = 1;

        for (int i = 0; i < n; i++)
            res += (inDeg[i] * count++);

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> roads = {{0, 1}, {1, 2}, {2, 3}, {0, 2}, {1, 3}, {2, 4}};
    cout << obj.maximumImportance(5, roads) << endl;
    return 0;
}