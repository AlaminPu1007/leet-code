#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int len = nums.size();
        map<int, int> Map;

        for (int i = 0; i < len; i++)
        {
            Map[nums[i]]++;
        }

        for (auto item = Map.rbegin(); item != Map.rend(); item++)
        {
            k -= item->second;

            if (k <= 0)
                return item->first;
        }
        return -1;
    }
};

int main(void)
{
    Solution obj;
    int k = 4;
    vector<int> arr = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    cout << obj.findKthLargest(arr, k) << endl;
    return 0;
}