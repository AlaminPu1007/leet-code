#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double mincostToHireWorkers(vector<int> &quality, vector<int> &wage, int k)
    {
        int n = quality.size();
        // it will be hold (ratio, quality)
        vector<pair<double, int>> workersGroup;

        for (int i = 0; i < n; i++)
            workersGroup.push_back({static_cast<double>(wage[i]) / quality[i], quality[i]});

        // sort them according to their lowest ratio
        sort(workersGroup.begin(), workersGroup.end());

        // define a max heap
        priority_queue<int> pq;

        double res = numeric_limits<double>::max();
        int total_quality = 0;

        for (int i = 0; i < n; i++)
        {
            // push item into pq
            pq.push(workersGroup[i].second);
            total_quality += workersGroup[i].second;

            // if our queue size become larger than k
            if (pq.size() > k)
            {
                total_quality -= pq.top();
                pq.pop();
            }

            if (pq.size() == k)
            {
                res = min(res, total_quality * workersGroup[i].first);
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    // wage would be the ratio or rate
    vector<int> quality = {3, 1, 10, 10, 1}, wage = {4, 8, 2, 2, 7};
    int k = 3;

    cout << obj.mincostToHireWorkers(quality, wage, k) << endl;

    return 0;
}