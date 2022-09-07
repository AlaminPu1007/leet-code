#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int len = arr.size();
        map<int, int> Map;
        vector<int> ans;
        for (int i = 0; i < len; i++)
            Map[arr[i]]++;

        for (auto item : Map)
            ans.push_back(item.second);

        int ans_len = ans.size();

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans_len - 1; i++)
            if (ans[i] == ans[i + 1])
                return false;

        return true;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {26, 2, 16, 16, 5, 5, 26, 2, 5, 20, 20, 5, 2, 20, 2, 2, 20, 2, 16, 20, 16, 17, 16, 2, 16, 20, 26, 16};
    bool res = obj.uniqueOccurrences(arr);
    cout << res << endl;
    return 0;
}