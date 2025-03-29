#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        int n = nums.size();

        if (n <= 1)
            return true;

        for (int i = 0; i < n - 1; i++)
            if ((nums[i] % 2 == 0 && nums[i + 1] % 2 == 0) || (nums[i] % 2 == 1 && nums[i + 1] % 2 == 1))
                return false;
        
        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 1, 4};

    cout << obj.isArraySpecial(arr) << endl;

    return 0;
}