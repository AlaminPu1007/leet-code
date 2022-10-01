
// T.C-> O(log(n)) for finding left value by using binary search algorithm, and O(n) for pushing element in new array
//  S.C->O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {

        vector<int> ans;
        int right = arr.size() - k, left = 0;

        while (left < right)
        {
            int mid = (right + left) / 2;
            if (x - arr[mid] > arr[mid + k] - x)
            {
                left = mid + 1;
            }
            else
                right = mid;
        }

        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[left + i]);
        }

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