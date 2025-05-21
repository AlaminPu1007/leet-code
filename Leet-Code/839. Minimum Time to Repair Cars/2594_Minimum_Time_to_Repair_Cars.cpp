#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long repairCars(vector<int> &ranks, int cars)
    {
        long long low = 1, high = static_cast<long long>(ranks[0]) * cars * cars;
        long long res = 0;

        while (low <= high)
        {
            long long mid = (high + low) / 2;

            long long value = count_cars(ranks, cars, mid);

            if (value >= cars)
            {
                res = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }

        return res;
    }

private:
    long long count_cars(vector<int> &ranks, int cars, long long time)
    {
        long long count = 0;

        for (auto item : ranks)
        {
            count += static_cast<long long>(sqrt(time / item));
        }

        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 2, 3, 1};
    cout << obj.repairCars(arr, 10) << endl;

    return 0;
}