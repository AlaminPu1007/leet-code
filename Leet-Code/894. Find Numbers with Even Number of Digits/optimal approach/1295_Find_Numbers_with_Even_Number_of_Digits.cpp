#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int res = 0;

        for (auto item : nums)
        {
            if ((item >= 10 && item <= 99) || (item >= 1000 && item <= 9999) || item == 100000)
                res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {12, 345, 2, 6, 7896};

    cout << obj.findNumbers(arr) << endl;

    return 0;
}