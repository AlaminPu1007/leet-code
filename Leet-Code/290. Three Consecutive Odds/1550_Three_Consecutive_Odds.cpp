#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int len = arr.size();
        for (int i = 0; i < len - 2; i++)
            if ((arr[i] % 2) && (arr[i + 1] % 2) && (arr[i + 2] % 2))
                return true;
        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 34, 3, 4, 5, 7, 23, 12};
    cout << obj.threeConsecutiveOdds(arr) << endl;
    return 0;
}