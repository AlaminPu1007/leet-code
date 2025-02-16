#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long continuousSubarrays(vector<int> &nums)
    {
        int n = nums.size();

        long long res = 0;
        map<int, int> Map;

        int left = 0;
        for (int right = 0; right < n; right++)
        {
            Map[nums[right]]++;

            while (left < n && Map.rbegin()->first - Map.begin()->first > 2)
            {
                Map[nums[left]]--;

                if (Map[nums[left]] == 0)
                    Map.erase(nums[left]);

                left++;
            }

            // calculate window length
            res += right - left + 1;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {5, 4, 2, 4};

    cout << obj.continuousSubarrays(arr) << endl;
    return 0;
}