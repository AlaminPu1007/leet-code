#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        int n = arr.size();

        int maxValue = *max_element(arr.begin(), arr.end());
        int minValue = *min_element(arr.begin(), arr.end());

        if (maxValue - minValue == 0)
            return true;

        if ((maxValue - minValue) % (n - 1) != 0)
            return false;

        int diff = (maxValue - minValue) / (n - 1);
        unordered_set<int> st;

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] - minValue) % diff != 0)
                return false;

            st.insert(arr[i]);
        }

        return st.size() == n;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {3, 5, 1};
    bool res = obj.canMakeArithmeticProgression(arr);
    cout << res << endl;
    return 0;
}