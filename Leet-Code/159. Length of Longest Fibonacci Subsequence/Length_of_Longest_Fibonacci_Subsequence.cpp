#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lenLongestFibSubseq(vector<int> &arr)
    {
        int len = arr.size(), ans = 0;

        unordered_set<int> A(arr.begin(), arr.end());

        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                int x = arr[j], y = arr[i] + arr[j];
                // n >= 3
                int length = 3;

                while (A.find(y) != A.end())
                {
                    int nextItem = x + y;
                    // update x to y
                    x = y;
                    // update y to nextItem
                    y = nextItem;
                    ans = max(ans, length++);
                }
            }
        }
        return ans >= 3 ? ans : 0;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int res = obj.lenLongestFibSubseq(arr);

    cout << res << endl;
    return 0;
}