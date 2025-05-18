#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumCandies(vector<int> &candies, long long k)
    {
        int n = candies.size();
        long long sum = 0;

        for (auto item : candies)
            sum += item;

        if (sum < k)
            return 0;

        int low = 1, high = (sum / k);
        int res = 0;

        while (low <= high)
        {
            int mid = (high + low) / 2;

            if (isPossibleDistribute(candies, k, mid))
            {
                low = mid + 1;
                res = mid;
            }
            else
                high = mid - 1;
        }

        return res;
    }

private:
    bool isPossibleDistribute(vector<int> &candies, long long k, int target)
    {
        int n = candies.size();
        long long res = 0;

        for (auto item : candies)
        {
            res += (item / target);
        }

        return res >= k;
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {5, 8, 6};
    cout << obj.maximumCandies(arr, 3) << endl;

    return 0;
}