#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        int n = l.size();
        vector<bool> res;

        for (int i = 0; i < n; i++)
        {
            int start = l[i];
            int end = r[i];

            // create a new array from queries
            vector<int> arr(begin(nums) + start, begin(nums) + end + 1);

            bool ans = arithmeticSubarray(arr);
            res.push_back(ans);
        }
        return res;
    }

private:
    bool arithmeticSubarray(vector<int> arr)
    {

        unordered_set<int> st;
        int minElement = INT_MAX;
        int maxElement = INT_MIN;

        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            minElement = min(minElement, arr[i]);
            maxElement = max(maxElement, arr[i]);

            st.insert(arr[i]);
        }

        if ((maxElement - minElement) % (n - 1) != 0)
        {
            return false;
        }

        int diff = (maxElement - minElement) / (n - 1);
        int curr = minElement + diff;

        while (curr < maxElement)
        {
            if (st.find(curr) == st.end())
            {
                return false;
            }

            curr += diff;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 6, 5, 9, 3, 7}, l = {0, 0, 2}, r = {2, 3, 5};
    vector<bool> res = obj.checkArithmeticSubarrays(arr, l, r);
    for (auto item : res)
        cout << item << " ";
    return 0;
}