#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int count = 0;
        map<int, int> Map;

        for (auto item : nums)
            if (item)
                Map[item] = 1;

        return Map.size();
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0};
    int res = obj.minimumOperations(arr);

    cout << res << endl;
    return 0;
}