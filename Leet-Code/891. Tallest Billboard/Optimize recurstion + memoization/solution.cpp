
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // To avoid negative diff, we will use same trick. (Adding an offset)
    int dp[21][10003];

public:
    int tallestBillboard(vector<int> &rods)
    {
        int n = rods.size();

        memset(dp, -1, sizeof(dp));

        // currently this recursive method will return two bill board sum
        // we just need to divided it by 2 and return it as a answer
        return Solved(0, 0, rods) / 2;
    }

private:
    int Solved(int i, int diff, vector<int> &rods)
    {
        if (i >= rods.size())
        {
            if (diff == 0)
                return 0;

            return INT_MIN;
        }

        // To avoid negative diff, we will use same trick. (Adding an offset)
        if (dp[i][diff + 5000] != -1)
            return dp[i][diff + 5000];

        int not_picking = Solved(i + 1, diff, rods);
        int pick_l1 = rods[i] + Solved(i + 1, diff + rods[i], rods);
        int pick_l2 = rods[i] + Solved(i + 1, diff - rods[i], rods);

        // To avoid negative diff, we will use same trick. (Adding an offset)
        return dp[i][diff + 5000] = max({not_picking, pick_l1, pick_l2});
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 6};
    cout << obj.tallestBillboard(arr) << endl;

    return 0;
}