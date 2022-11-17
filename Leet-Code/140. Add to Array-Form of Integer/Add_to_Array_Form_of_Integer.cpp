#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int K)
    {

        int len = num.size(), cur = K;
        vector<int> ans;

        int i = len;

        while (--i >= 0 || cur > 0)
        {
            if (i >= 0)
                cur += num[i];

            ans.push_back(cur % 10);
            cur /= 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 0, 0};
    vector<int> ans = obj.addToArrayForm(arr, 55);
    return 0;
}