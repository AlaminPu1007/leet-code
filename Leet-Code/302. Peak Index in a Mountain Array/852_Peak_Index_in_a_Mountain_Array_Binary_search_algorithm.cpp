#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {

        int l = 0, r = arr.size() - 1;
        while (l < r)
        {
            int mid = (r + l) / 2;

            if (arr[mid] < arr[mid + 1])

                l = mid + 1;

            else
                r = mid;
        }
        return l;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 10, 5, 2};
    cout << obj.peakIndexInMountainArray(arr) << endl;
    return 0;
}