#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int firstMinimum = INT_MAX, secondMinimum = INT_MAX;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < firstMinimum)
            {
                // /update secondMinimum with first minimum
                secondMinimum = firstMinimum;
                firstMinimum = prices[i];
            }
            else if (prices[i] < secondMinimum)
                secondMinimum = prices[i];
        }

        // both are accepted
        // int cost = money - (secondMinimum + firstMinimum);

        int cost = money - (secondMinimum + firstMinimum);

        if (cost >= 0)
            return cost;

        return money;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {98, 54, 6, 34, 66, 63, 52, 39};
    cout << obj.buyChoco(arr, 62);
    return 0;
}