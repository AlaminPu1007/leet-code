#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(vector<int> &position, int m)
    {
        // sort the given array

        sort(position.begin(), position.end());

        int n = position.size();

        int low = 1;
        int high = (position[n - 1] - position[0]);
        int res = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (isValidDistance(mid, position, m))
            {
                res = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        return res;
    }

private:
    bool isValidDistance(int dis, vector<int> &arr, int m)
    {
        // keep track of previous inserted all
        int prv = arr[0];

        // we mark first index value with 1 ball
        int count = 1;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] - prv >= dis)
            {
                prv = arr[i];
                count++;
            }

            if (count >= m)
                break;
        }
        return (count >= m);
    }
};

int main(void)
{
    Solution obj;
    vector<int> position = {79, 74, 57, 22};
    int m = 4;
    cout << obj.maxDistance(position, m) << endl;
    return 0;
}