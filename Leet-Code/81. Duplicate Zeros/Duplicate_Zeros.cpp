#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        int len = arr.size();
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == 0)
            {
                for (int j = len - 1; j > i; j--)
                    arr[j] = arr[j - 1];
                i++;
            }
        }
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    obj.duplicateZeros(arr);
    return 0;
}