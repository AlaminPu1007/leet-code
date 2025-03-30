#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int count = 1;

        for (int i = 1; i < n * 2; i++)
        {
            if (nums[(i - 1) % n] <= nums[i % n])
                count += 1;

            else
                count = 1;

            if (n == count)
                return true;
        }

        return n == 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 4, 5, 1, 2};
    cout << obj.check(arr) << endl;

    return 0;
}