#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool doesValidArrayExist(vector<int> &derived)
    {
        int res = 0;

        for (auto item : derived)
            res ^= item;

        return res == 0;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 0};
    cout << obj.doesValidArrayExist(arr) << endl;
    return 0;
}