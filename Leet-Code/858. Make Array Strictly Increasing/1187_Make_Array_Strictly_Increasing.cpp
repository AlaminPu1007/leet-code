#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int makeArrayIncreasing(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size();
        // sort array2
        sort(arr2.begin(), arr2.end());
        unordered_map<string, int> Cache;
        int res = Solved(0, arr1, arr2, INT_MIN, n, Cache);

        return res == (INT_MAX - 10) ? -1 : res;
    }

private:
    int Solved(int idx, vector<int> &arr1, vector<int> &arr2, int prv, int n, unordered_map<string, int> &Cache)
    {
        // handle the base case
        if (idx >= n)
            return 0; // no operation are required

        string key = to_string(idx) + "_" + to_string(prv);

        if (Cache.find(key) != Cache.end())
            return Cache[key];

        // since we have required min as a result, initialized res with maximum value
        int res = INT_MAX - 10;

        // if current element is greater than previous element
        // then there is no operation is required
        if (arr1[idx] > prv)
            res = Solved(idx + 1, arr1, arr2, arr1[idx], n, Cache);

        // explore other possibilities if we choose strick increasing element from arr2
        int index = upper_bound(arr2.begin(), arr2.end(), prv) - arr2.begin();

        if (index < arr2.size())
            res = min(res, 1 + Solved(idx + 1, arr1, arr2, arr2[index], n, Cache));

        return Cache[key] = res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr1 = {1, 5, 3, 6, 7}, arr2 = {1, 3, 4};

    cout << obj.makeArrayIncreasing(arr1, arr2) << endl;

    return 0;
}