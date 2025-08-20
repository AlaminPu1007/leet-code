#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        int res = 0;
        vector<int> arr(n, 1);

        // left pass to get as much possible candy if the item is greater than it's left child
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
                arr[i] = arr[i - 1] + 1;
        }

        // right pass to get as much possible candy if the item is greater than it's right child
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
                arr[i] = max(arr[i], arr[i + 1] + 1);
        }

        for (auto item : arr)
            res += item;

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 0, 2};

    cout << obj.candy(arr) << endl;

    return 0;
}
