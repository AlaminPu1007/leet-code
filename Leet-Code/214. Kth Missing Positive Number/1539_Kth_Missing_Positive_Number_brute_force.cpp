#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int len = arr.size();
        vector<int> misNo(2001, false), res;

        for (int i = 0; i < len; i++)
            misNo[arr[i]] = true;

        for (int i = 1; i < 2001; i++)
        {
            if (!misNo[i])
                res.push_back(i);
        }

        return res[k - 1];
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