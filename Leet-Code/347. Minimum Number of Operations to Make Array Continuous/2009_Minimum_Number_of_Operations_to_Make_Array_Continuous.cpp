#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> temp;
        map<int, int> Map;

        for (auto item : nums)
        {
            Map[item]++;
        }

        for (auto item : Map)
        {
            temp.push_back(item.first);
        }

        int res = len, r = 0;
        int len2 = temp.size();

        for (int l = 0; l < len2; l++)
        {
            while (r < len2 && temp[r] < temp[l] + len)
            {
                r++;
            }

            int window = r - l;
            res = min(res, len - window);
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 6, 5};
    cout << obj.minOperations(arr) << endl;
    return 0;
}