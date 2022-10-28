#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ans = 0;

    bool isUnique(string &copy_str)
    {
        vector<int> value(26, 0);
        int len = copy_str.size();
        for (int i = 0; i < len; i++)
        {
            if (value[copy_str[i] - 'a'] == 1)
                return false;

            value[copy_str[i] - 'a']++;
        }
        return true;
    }

    void RecursiveSolve(vector<string> &arr, int idx, string copy_str)
    {
        if (!isUnique(copy_str))
            return;

        int len = copy_str.size();
        ans = max(ans, len);
        // base-case
        if (idx >= arr.size())
            return;

        // with addition
        RecursiveSolve(arr, idx + 1, copy_str + arr[idx]);

        // without addition
        RecursiveSolve(arr, idx + 1, copy_str);
    }

    int maxLength(vector<string> &arr)
    {
        // called recursion method (backtracking)
        RecursiveSolve(arr, 0, "");
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> arr = {"un", "iq", "ue"};
    int ans = obj.maxLength(arr);
    cout << ans << endl;
    return 0;
}