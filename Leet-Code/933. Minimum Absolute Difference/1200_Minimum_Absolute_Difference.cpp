#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        int n = arr.size();

        // sort the array
        sort(arr.begin(), arr.end());

        int diff = arr[n - 1];
        vector<vector<int>> res;

        for (int i = 1; i < n; i++)
        {
            int curDiff = arr[i] - arr[i - 1];

            if (diff > curDiff)
            {
                diff = curDiff;

                res.clear();
                res.push_back({arr[i - 1], arr[i]});
            }
            else if (diff == curDiff)
                res.push_back({arr[i - 1], arr[i]});
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 8, -10, 23, 19, -4, -14, 27};

    vector<vector<int>> res = obj.minimumAbsDifference(arr);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";

        cout << endl;
    }

    return 0;
}