#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minBitwiseArray(vector<int> &nums)
    {
        vector<int> res;

        for (auto item : nums)
        {
            if (item == 2)
            {
                res.push_back(-1);
                continue;
            }

            bool found = false;

            // Check bits from position 1 to 31, get most recent 0 from given item of bit's
            // 1 -> 32 due to int constrains
            for (int i = 1; i < 32; i++)
            {
                if (!(item & (1 << i)))
                {
                    res.push_back(item ^ (1 << (i - 1)));
                    found = true;
                    break;
                }
            }

            if (!found)
                res.push_back(-1);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 5, 7};

    vector<int> res = obj.minBitwiseArray(arr);

    for (auto item : res)
        cout << item << " ";

    cout << endl;

    return 0;
}