#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int> &obstacles)
    {
        int n = obstacles.size();
        vector<int> res(n), temp;

        for (int i = 0; i < n; i++)
        {
            // find the upper bound or greater element from current element
            int idx = upper_bound(temp.begin(), temp.end(), obstacles[i]) - temp.begin();

            if (idx == temp.size())
                temp.push_back(obstacles[i]);
            else
            {
                temp[idx] = obstacles[i];
            }

            res[i] = idx + 1;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 4, 6, 2, 3, 5};

    vector<int> res = obj.longestObstacleCourseAtEachPosition(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}