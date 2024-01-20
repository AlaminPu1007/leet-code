#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNicePairs(vector<int> &nums)
    {
        int ans = 0, len = nums.size();
        vector<int> revArr(len, 0);

        for (int i = 0; i < len; i++)
        {
            revArr[i] = (nums[i] - rev(nums[i]));
        }

        unordered_map<int, int> Map;
        int MOD = 1e9 + 7;
        for (auto item : revArr)
        {
            if (Map.find(item) != Map.end())
                ans = (ans + Map[item]) % MOD;

            Map[item]++;
        }

        return ans;
    }

private:
    int rev(int num)
    {
        int revNum = 0;
        int copyNum = num;

        while (copyNum != 0)
        {
            int mod = (copyNum % 10);
            revNum = revNum * 10 + mod;
            copyNum /= 10;
        }

        return revNum;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {42, 11, 1, 97};
    cout << obj.countNicePairs(arr) << endl;
    return 0;
}