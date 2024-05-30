#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int n = tickets.size();
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            if (i > k)
            {

                if (tickets[i] >= tickets[k])
                    res += tickets[k] - 1;
                else
                    res += tickets[i];
            }
            else
            {
                if (tickets[i] > tickets[k])
                {
                    res += tickets[k];
                }
                else
                    res += tickets[i];
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> tickets = {15, 66, 3, 47, 71, 27, 54, 43, 97, 34, 94, 33, 54, 26, 15, 52, 20, 71, 88, 42, 50, 6, 66, 88, 36, 99, 27, 82, 7, 72};
    int k = 18;
    cout << obj.timeRequiredToBuy(tickets, k) << endl;
    return 0;
}