/**
 * To solve this problem, we need monotonic increasing approach using stack
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        vector<int> st;
        int res = 0;

        for (auto item : nums)
        {
            while (st.size() && st.back() > item)
                st.pop_back();

            if (!item)
                continue;

            if (st.empty() || st.back() < item)
            {
                res++;
                st.push_back(item);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 1, 2, 1};
    cout << obj.minOperations(arr) << endl;

    return 0;
}