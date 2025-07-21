#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countLargestGroup(int n)
    {
        int res = 0;
        int maxValue = 0;
        unordered_map<int, int> Map;

        for (int i = 1; i <= n; i++)
        {
            int key = 0, j = i;

            while (j)
            {
                key += j % 10;
                j /= 10;
            }

            Map[key]++;

            maxValue = max(maxValue, Map[key]);
        }

        for (auto item : Map)
            if (item.second == maxValue)
                res++;

        return res;
    }
};

int main(void)
{
    Solution obj;
    cout << obj.countLargestGroup(13) << endl;

    return 0;
}