
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        // the max days, till
        int last_days = days[days.size() - 1];

        vector<int> dp(last_days + 1, 0);
        unordered_set<int> st;

        for (int i = 0; i < days.size(); i++)
            st.insert(days[i]);

        for (int i = 1; i <= last_days; i++)
        {
            if (st.find(i) == st.end())
            {
                dp[i] = dp[i - 1];
                continue;
            }

            // make current item with int_max
            dp[i] = INT_MAX;

            // for days-one
            int one_days = costs[0] + dp[i - 1];

            // for days-seven
            int two_days = costs[1] + dp[max(i - 7, 0)];

            // for days-thirty
            int three_days = costs[2] + dp[max(i - 30, 0)];

            dp[i] = min({one_days, two_days, three_days});
        }

        return dp[last_days];
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 4, 6, 7, 8, 20};
    vector<int> costs = {2, 7, 15};

    cout << obj.mincostTickets(arr, costs) << endl;

    return 0;
}