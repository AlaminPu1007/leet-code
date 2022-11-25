#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfWeakCharacters(vector<vector<int>> &properties)
    {
        // Sort array of properties
        sort(properties.begin(), properties.end(), Compare_Method);

        int maxTillNow = INT_MIN;
        int ans = 0;
        for (auto p : properties)
        {
            if (maxTillNow > p[1])
                ans++;
            else
                maxTillNow = p[1];
        }

        return ans;
    }

    static bool Compare_Method(vector<int> &a, vector<int> &b)
    {
        if (a[0] != b[0])
            return a[0] > b[0];
        return a[1] < b[1];
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> arr = {{5, 5}, {6, 3}, {3, 6}};
    int ans = obj.numberOfWeakCharacters(arr);
    cout << ans << endl;
    return 0;
}