#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findScore(vector<int> &nums)
    {
        long long res = 0;
        int n = nums.size();

        vector<pair<int, int>> sortedArr;
        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++)
            sortedArr.push_back({nums[i], i});

        sort(sortedArr.begin(), sortedArr.end());

        for (int i = 0; i < n; i++)
        {
            int value = sortedArr[i].first;
            int idx = sortedArr[i].second;

            if (!vis[idx])
            {
                vis[idx] = 1;
                res += (long long)(value);

                if (idx - 1 >= 0)
                    vis[idx - 1] = 1;

                if (idx + 1 < n)
                    vis[idx + 1] = 1;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 1, 3, 4, 5, 2};
    cout << obj.findScore(arr) << endl;
    return 0;
}