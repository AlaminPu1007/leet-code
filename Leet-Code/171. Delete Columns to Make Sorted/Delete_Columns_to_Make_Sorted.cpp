#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {

        int col_len = strs[0].size(), row_len = strs.size(), ans = 0;

        // Iterate over each index in the string.
        for (int col = 0; col < col_len; col++)
            // Iterate over the strings.
            for (int row = 1; row < row_len; row++)
                // Characters should be in increasing order,
                // If not, increment the counter.
                if (strs[row][col] < strs[row - 1][col])
                {
                    ans++;
                    break;
                }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<string> strs = {"cba", "daf", "ghi"};
    int res = obj.minDeletionSize(strs);
    cout << res << endl;
    return 0;
}