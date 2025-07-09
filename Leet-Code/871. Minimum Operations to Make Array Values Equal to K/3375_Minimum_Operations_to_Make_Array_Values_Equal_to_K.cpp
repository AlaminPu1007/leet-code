#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        unordered_set<int> st;

        for (auto item : nums)
        {
            if (item < k)
                return -1;

            else if (item > k)
                st.insert(item);
        }

        return st.size();
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {5, 2, 5, 4, 5};

    cout << obj.minOperations(arr, 2) << endl;

    return 0;
}