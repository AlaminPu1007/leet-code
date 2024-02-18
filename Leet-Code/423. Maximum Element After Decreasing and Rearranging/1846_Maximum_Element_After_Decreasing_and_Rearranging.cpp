#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int> &arr)
    {
        int len = arr.size(), ans = 1;

        // sort the array
        sort(arr.begin(), arr.end());

        for (int i = 1; i < len; i++)
        {
            if (arr[i] >= ans + 1)
                ans++;
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {100, 1, 1000};
    cout << obj.maximumElementAfterDecrementingAndRearranging(arr) << endl;
    return 0;
}