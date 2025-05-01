#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int n = blocks.size();
        int reColors = 0;
        int res = INT_MAX;
        int left = 0;

        for (int i = 0; i < n; i++)
        {
            if (blocks[i] == 'W')
                reColors++;

            int window = i - left + 1;

            if (window == k)
            {
                res = min(res, reColors);

                if (blocks[left] == 'W')
                    reColors--;

                left++;
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string blocks = "WBWBBBW";
    cout << obj.minimumRecolors(blocks, 2) << endl;

    return 0;
}