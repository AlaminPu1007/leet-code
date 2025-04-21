#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int numOfSubarrays(vector<int> &arr)
    {
        int n = arr.size();
        int res = 0;
        int totalSum = 0, oddCount = 0, evenCount = 0;

        for (int i = 0; i < n; i++)
        {
            totalSum += arr[i];

            if (totalSum % 2 == 0)
            {
                res = (res + oddCount) % MOD;
                evenCount++;
            }
            else
            {
                // 1 for current event count
                // nad eveCount add for if we removed this much of event no of subarray, then we will get a odd subarray
                res = (res + 1 + evenCount) % MOD;
                oddCount++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 5};

    cout << obj.numOfSubarrays(arr) << endl;

    return 0;
}