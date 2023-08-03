#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSpeedOnTime(vector<int> &dist, double hour)
    {
        int len = dist.size();
        int left = 0;
        int right = 1e7;
        int res = -1;

        while (left <= right)
        {
            int mid = (left + right) / 2;

            if (totalHours(dist, mid) <= hour)
            {
                res = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return res;
    }

private:
    double totalHours(vector<int> &dist, int value)
    {
        double time = 0;
        int len = dist.size();
        for (int i = 0; i < len; i++)
        {
            // get hours after division
            double t = (double)dist[i] / (double)value;

            // we do not need to last item as a ceil
            time += (i == len - 1) ? t : (ceil(t));
        }
        return time;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 2};
    double hour = 6;
    cout << obj.minSpeedOnTime(arr, hour) << endl;
    return 0;
}
