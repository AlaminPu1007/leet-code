#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
    {
        int n = profits.size();

        // define a minHeap
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minCapita;

        // define a maxHeap
        priority_queue<int> maxProfit;

        for (int i = 0; i < n; i++)
            minCapita.push({capital[i], profits[i]});

        while (k--)
        {

            while (minCapita.size() && minCapita.top().first <= w)
            {
                int value = minCapita.top().second;
                maxProfit.push(value);
                minCapita.pop();
            }

            if (maxProfit.empty())
                break;

            // get the maximum profit as much as possible
            w += maxProfit.top();
            maxProfit.pop();
        }

        return w;
    }
};

int main(void)
{
    Solution obj;
    int k = 2, w = 0;
    vector<int> profits = {1, 2, 3}, capital = {0, 1, 1};
    cout << obj.findMaximizedCapital(k, w, profits, capital) << endl;
    return 0;
}