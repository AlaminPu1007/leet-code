#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int len = flowerbed.size();
        int count = 0;

        for (int i = 0; i < len; i++)
        {
            if (flowerbed[i] == 0)
            {
                // check left boundary or left value from current value
                bool left = (i == 0) || (flowerbed[i - 1] == 0);
                // check right boundary or right value from current value
                bool right = (i == len - 1) || (flowerbed[i + 1] == 0);

                if (right && left)
                {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }

    int main(void)
    {
        Solution obj;

        vector<int> arr = {1, 0, 0, 0, .1};
        bool res = obj.canPlaceFlowers(arr, 1);
        cout << res << endl;
        return 0;
    }
};