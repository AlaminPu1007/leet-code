#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxChunksToSorted(vector<int> &arr)
    {
        int n = arr.size();
        int res = 0, cur_max = -1;

        for (int i = 0; i < n; i++)
        {
            cur_max = max(cur_max, arr[i]);

            if (cur_max == i)
                res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 0, 2, 3, 4};

    cout << obj.maxChunksToSorted(arr) << endl;
    return 0;
}