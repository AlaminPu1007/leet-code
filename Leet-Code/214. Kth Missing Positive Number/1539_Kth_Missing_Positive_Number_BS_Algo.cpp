#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int low = 0, high = arr.size();

        while (low < high)
        {
            int mid = (low + (high - low) / 2);

            // if arr[mid] - mid > k then find target right side
            if (arr[mid] - mid > k)
            {
                high = mid;
            }
            else
                low = mid + 1;
        }

        return low + k;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 4, 7, 11};
    int res = obj.findKthPositive(arr, 5);
    cout << res << endl;
    return 0;
}