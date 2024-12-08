#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumSize(vector<int> &nums, int maxOperations)
    {
        int n = nums.size();
        int maxNum = *max_element(nums.begin(), nums.end());

        int l = 2, r = maxNum, res = maxNum;

        while (l < r)
        {
            int mid = (r + l) / 2;

            if (can_divided(nums, mid, maxOperations))
            {
                r = mid;
                res = r;
            }
            else
                l = mid + 1;
        }

        return res;
    }

private:
    bool can_divided(vector<int> &arr, int max_ball, int maxOperations)
    {
        int opt = 0;

        for (auto item : arr)
        {
            opt += ceil(item / (double)max_ball) - 1;

            if (opt > maxOperations)
                return false;
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {7, 17};

    cout << obj.minimumSize(arr, 2) << endl;
    return 0;
}