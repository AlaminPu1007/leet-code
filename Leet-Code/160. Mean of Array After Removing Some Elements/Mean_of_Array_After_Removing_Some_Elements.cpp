#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        int len = arr.size();
        sort(arr.begin(), arr.end());

        int s = (len * 5 / 100);
        double sum = 0, ans = 0;
        for (int i = s; i < len - s; i++)
        {
            sum += arr[i];
        }
        ans = sum / (double)(len - (2 * s));
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    double ans = obj.trimMean(arr);
    cout << ans << endl;

    return 0;
}