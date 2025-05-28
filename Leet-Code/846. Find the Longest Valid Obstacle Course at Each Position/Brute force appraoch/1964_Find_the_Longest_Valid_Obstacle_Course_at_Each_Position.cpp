/**
 * Brute force approach. This solution will give us "Time Limit Exceeded"
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int> &obstacles)
    {
        int n = obstacles.size();
        vector<int> res(n, 1);

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (obstacles[j] <= obstacles[i])
                {
                    res[i] = max(res[i], res[j] + 1);
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 2};

    vector<int> res = obj.longestObstacleCourseAtEachPosition(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}