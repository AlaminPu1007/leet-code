#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        int ans = 0;

        while (left <= right)
        {
            int mid = left + ((right - left) / 2);
            // to avoid -> runtime error: signed integer overflow
            // convert it to long data type
            long long totalH = getHours(piles, mid);

            if (totalH <= h)
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }

        return ans;
    }

private:
    long long getHours(vector<int> &piles, int bananasPerHour)
    {
        long long totalH = 0, len = piles.size();
        for (int i = 0; i < len; i++)
        {
            long long hoursToEatPile = ceil(piles[i] / (double)bananasPerHour);
            totalH += hoursToEatPile;
        }
        return totalH;
    }
};

int main(void)
{
    Solution obj;
    vector<int> piles = {30, 11, 23, 4, 20};
    int res = obj.minEatingSpeed(piles, 5);
    cout << res << endl;
    return 0;
}