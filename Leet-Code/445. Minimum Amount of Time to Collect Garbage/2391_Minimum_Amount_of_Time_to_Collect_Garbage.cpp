#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int n = travel.size(), m = garbage.size();
        unordered_map<char, int> garbageLastIndex, garbageCount;
        vector<int> prefixSum(n + 1, 0);

        int ans = 0;

        for (int i = 0; i < m; i++)
        {
            for (auto c : garbage[i])
            {
                garbageLastIndex[c] = i;
                garbageCount[c]++;
            }
        }

        prefixSum[1] = travel[0];

        // making of prefix sum array
        for (int i = 1; i < n; i++)
            prefixSum[i + 1] = prefixSum[i] + travel[i];

        string str = "GPM";

        for (auto c : str)
            if (garbageCount[c])
                ans += prefixSum[garbageLastIndex[c]] + garbageCount[c];

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> g = {"G", "P", "GP", "GG"};
    vector<int> arr = {2, 4, 3};
    cout << obj.garbageCollection(g, arr) << endl;
    return 0;
}