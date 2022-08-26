#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int len1 = arr1.size();
        int count = 0;

        sort(arr2.begin(), arr2.end());

        for (int i = 0; i < len1; i++)
        {
            if (isValid(arr2, arr1[i], d))
                count++;
        }
        return count;
    }

    bool isValid(vector<int> &arr2, int arr_value, int d)
    {
        int high = arr2.size() - 1, low = 0;
        while (low <= high)
        {
            int mid = (high + low) / 2;

            if (abs(arr2[mid] - arr_value) <= d)
                return false;

            else if (arr2[mid] < arr_value)
                low = mid + 1;

            else
                high = mid - 1;
        }
        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr1 = {2, 1, 100, 3}, arr2 = {-5, -2, 10, -3, 7};
    int res = obj.findTheDistanceValue(arr1, arr2, 6);

    cout << res << endl;
    return 0;
}