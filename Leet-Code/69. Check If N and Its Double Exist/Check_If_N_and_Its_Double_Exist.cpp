#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int len = arr.size();

        for (int i = 0; i < len - 1; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if ((arr[j] == arr[i] * 2) || (arr[i] == arr[j] * 2))
                    return true;
            }
        }

        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {10, 2, 5, 3};
    bool res = obj.checkIfExist(arr);

    cout << res << " ";

    return 0;
}