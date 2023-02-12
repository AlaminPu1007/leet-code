#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int len = nums.size(), res = 0;
        if (len == 0)
            return 0;

        int Max = 0, Min = 0;
        Max = *max_element(nums.begin(), nums.end());
        Min = *min_element(nums.begin(), nums.end());

        for (auto item : nums)
        {
            if (item > Min && item < Max)
                res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {11, 7, 2, 15};
    int res = obj.countElements(arr);
    cout << res << endl;
    return 0;
}