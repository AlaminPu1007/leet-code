#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> res;

        for (auto item : nums)
        {
            string copy_item = to_string(item);
            int rev = 0;

            for (int i = 0; copy_item[i] != '\0'; i++)
            {
                int value = copy_item[i] - '0';
                res.push_back(value);
            }
        }
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {13, 25, 83, 77};
    vector<int> res = obj.separateDigits(arr);
    for (auto item : res)
        cout << item << " ";
    return 0;
}