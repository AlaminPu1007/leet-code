#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool find132pattern(vector<int> &nums)
    {
        int len = nums.size();
        stack<pair<int, int>> st;

        int minValue = INT_MAX;

        for (int i = 0; i < len; i++)
        {

            while (!st.empty() && st.top().first < nums[i])
            {
                st.pop();
            }

            if (!st.empty() && st.top().first > nums[i] && st.top().second < nums[i])
                return true;

            minValue = min(minValue, nums[i]);
            st.push({nums[i], minValue});
        }

        return false;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 1, 4, 2};
    cout << obj.find132pattern(arr) << endl;
    return 0;
}