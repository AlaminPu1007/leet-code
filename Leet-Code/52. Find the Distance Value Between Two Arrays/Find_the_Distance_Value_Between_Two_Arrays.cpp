#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int len1 = arr1.size(), len2 = arr2.size();
        int count = arr1.size();

        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                if (abs(arr1[i] - arr2[j]) <= d)
                {
                    count--;
                    break;
                };
            }
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr1 = {2, 1, 100, 3}, arr2 = {-5, -2, 10, -3, 7};
    int res = obj.findTheDistanceValue(arr1, arr2, 6);

    cout << res << endl;
    return 0;
}