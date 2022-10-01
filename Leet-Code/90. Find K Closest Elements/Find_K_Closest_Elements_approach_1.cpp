// https://leetcode.com/problems/find-k-closest-elements/
//  Approach-1
//  T.C-> O(n*log(n))
// S.C->O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int> ans;
        int len = arr.size();
        vector<pair<int, int>> Pairs;
        if (len == 1)
            return arr;

        for (int i = 0; i < len; i++)
        {
            int temp = abs(arr[i] - x);
            // make key-value pairs with vector
            Pairs.push_back({temp, i}); // temp = key, i = value
        }

        // sort paris
        sort(Pairs.begin(), Pairs.end());

        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[Pairs[i].second]);
        }

        // sort the answer
        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans = obj.findClosestElements(arr, 4, 3);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}