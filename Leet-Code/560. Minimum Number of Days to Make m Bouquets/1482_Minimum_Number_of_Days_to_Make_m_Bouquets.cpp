#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long val = m * 1ll * k * 1ll;
        if (val > bloomDay.size())
            return -1; // impossible case.

        int low = INT_MAX, high = INT_MIN;
        int ans = -1;

        // find out the most min and max value from the given array
        for (auto item : bloomDay)
        {
            low = min(low, item);
            high = max(high, item);
        }

        while (low <= high)
        {
            int mid = (high + low) / 2;

            if (getMinDays(bloomDay, mid, m, k))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

private:
    bool getMinDays(vector<int> &arr, int day, int m, int k)
    {
        int count = 0;
        int n = arr.size();
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= day)
                count++;
            else
            {
                res += (count / k);
                count = 0;
            }
        }

        res += (count / k);

        return (res >= m);
    }
};

int main(void)
{
    Solution obj;
    vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
    int m = 2, k = 3;
    cout << obj.minDays(bloomDay, m, k) << endl;
    return 0;
}