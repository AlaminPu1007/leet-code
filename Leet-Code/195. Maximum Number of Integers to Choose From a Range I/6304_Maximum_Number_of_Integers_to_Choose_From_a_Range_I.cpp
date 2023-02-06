#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        int res = 0;
        map<int, int> Map;
        for (auto item : banned)
            Map[item]++;

        for (int i = 1; i <= n; i++)
        {
            auto item = Map.find(i);
            if (item != Map.end())
            {
                continue;
            }
            else if (i <= maxSum)
            {
                res++;
                maxSum -= i;
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> banned = {11};
    int n = 7, maxSum = 50;
    int res = obj.maxCount(banned, n, maxSum);
    cout << res << endl;
    return 0;
}