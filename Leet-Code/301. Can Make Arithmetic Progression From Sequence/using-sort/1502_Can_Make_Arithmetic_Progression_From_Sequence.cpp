#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        int n = arr.size();
        // sort array
        sort(arr.begin(), arr.end());

        int diff = arr[1] - arr[0];

        for (int i = 2; i < n; i++)
        {
            if (arr[i] - arr[i - 1] != diff)
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 5, 1};
    bool res = obj.canMakeArithmeticProgression(arr);
    cout << res << endl;
    return 0;
}