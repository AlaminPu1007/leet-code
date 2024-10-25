#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {
        int n = difficulty.size();
        int m = worker.size();

        priority_queue<pair<int, int>> pq; // max heap of pairs

        for (int i = 0; i < n; i++)
        {
            int diff = difficulty[i];
            int prof = profit[i];

            pq.push({prof, diff});
        }

        sort(begin(worker), end(worker), greater<int>()); // descending order

        int i = 0;
        int totalProfit = 0;
        while (i < m && !pq.empty())
        {
            if (pq.top().second > worker[i])
            {
                pq.pop();
            }
            else
            {
                totalProfit += pq.top().first;
                i++;
            }
        }

        return totalProfit;
    }
};

int main(void)
{
    Solution obj;
    vector<int> difficulty = {2, 4, 6, 8, 10}, profit = {10, 20, 30, 40, 50}, worker = {4, 5, 6, 7};
    cout << obj.maxProfitAssignment(difficulty, profit, worker) << endl;
    return 0;
}