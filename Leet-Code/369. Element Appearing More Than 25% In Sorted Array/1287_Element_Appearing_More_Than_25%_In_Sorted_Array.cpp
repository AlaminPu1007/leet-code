#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int n = arr.size();
        int count = 1;
        int res = arr[0];
        int maxValue = 0;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }

            if (maxValue < count)
            {
                maxValue = count;
                res = arr[i];
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 2, 6, 6, 6, 6, 7, 10};
    cout << obj.findSpecialInteger(arr) << endl;
    return 0;
}