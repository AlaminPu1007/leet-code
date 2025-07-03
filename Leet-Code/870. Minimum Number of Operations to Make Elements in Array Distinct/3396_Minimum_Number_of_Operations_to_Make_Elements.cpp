#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < nums.size(); i += 3)
        {
            if (checkUniqueue(i, nums))
                return ans;

            ans++;
        }

        return ans;
    }

private:
    bool checkUniqueue(int start, vector<int> &nums)
    {
        int n = nums.size();
        unordered_set<int> st;

        for (int i = start; i < n; i++)
        {
            if (st.count(nums[i]))
                return false;

            st.insert(nums[i]);
        }

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 4, 2, 3, 3, 5, 7};

    cout << obj.minimumOperations(arr) << endl;

    return 0;
}