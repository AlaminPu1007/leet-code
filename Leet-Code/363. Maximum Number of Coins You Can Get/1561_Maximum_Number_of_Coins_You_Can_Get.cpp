#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        int len = piles.size();
        int ans = 0;
        // sort the array
        sort(piles.begin(), piles.end());

        int lef = 0, right = len - 2;

        for (int i = 0; i < len / 3; i++)
        {
            ans += piles[right];
            right -= 2;
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 4, 5};
    cout << obj.maxCoins(arr) << endl;
    return 0;
}