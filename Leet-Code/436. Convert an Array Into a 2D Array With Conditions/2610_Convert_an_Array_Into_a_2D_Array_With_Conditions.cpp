#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> freq(n + 1);

        vector<vector<int>> res;

        for (int i = 0; i < n; i++)
        {
            /*
                If the frequency of the current integer is greater than the current size of the two-dimensional array ans,
                indicating that we need to start a new row to store this element,
                so we add a row and insert the element into the new row.
            */
            if (freq[nums[i]] >= res.size())
                res.push_back({});

            res[freq[nums[i]]].push_back(nums[i]);

            freq[nums[i]]++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 4, 1, 2, 3, 1};
    vector<vector<int>> res = obj.findMatrix(arr);

    for (auto item : res)
    {
        for (auto it : item)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}