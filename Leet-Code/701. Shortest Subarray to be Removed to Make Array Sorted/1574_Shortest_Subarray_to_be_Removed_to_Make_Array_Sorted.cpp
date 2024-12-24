#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLengthOfShortestSubarray(vector<int> &arr)
    {
        int n = arr.size();
        int r = n - 1, l = 0;

        // Do stuff for prefix or try to removed prefix
        // To do that we need to check the valid post post length, where nums should be in decreasing order
        while (r > 0 && arr[r] >= arr[r - 1])
            r--;

        int res = r;

        // count valid post fix length, where nums should be in increasing order
        while ((l + 1 < n) && arr[l] <= arr[l + 1])
            l++;

        // count post fix length
        int postfix_len = (n - 1 - l);

        // try to get which one would be minimum to get the result
        res = min(res, postfix_len);

        // now calculate staff for middle one. where we need to find out the invalid length of nums
        l = 0, r = n - 1;

        while (l < r)
        {
            // Try to shrink to window as much as possible
            while (l + 1 < r && r < n && arr[r] >= arr[r - 1] && arr[l] <= arr[r])
            {
                r--;
            }

            // now try to shift right pointer if we got an invalid number
            // ex: [1, 2(l), 3, 10, 9, 1(r), 2, 3]
            while (r < n && arr[l] > arr[r])
                r++;

            // update result for middle invalid length
            res = min(res, r - l - 1);

            // we have already calculated prefix
            // we need to stop them

            if (arr[l] > arr[l + 1])
                break;

            l++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 10, 4, 2, 3, 5};
    cout << obj.findLengthOfShortestSubarray(arr) << endl;
    return 0;
}