#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCompleteSubarrays(vector<int> &nums)
    {
        int n = nums.size(), res = 0, l = 0;
        unordered_set<int> st;

        for (auto item : nums)
            st.insert(item);

        int totalDistinct = st.size();

        unordered_map<int, int> Map;

        for (int i = 0; i < n; i++)
        {
            Map[nums[i]]++;

            while (Map.size() == totalDistinct)
            {
                res += (n - i);
                Map[nums[l]]--;

                if (Map[nums[l]] == 0)
                    Map.erase(nums[l]);

                l++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 1, 2, 2};
    cout << obj.countCompleteSubarrays(arr) << endl;

    return 0;
}