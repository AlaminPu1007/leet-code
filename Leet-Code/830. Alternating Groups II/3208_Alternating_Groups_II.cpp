#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfAlternatingGroups(vector<int> &colors, int k)
    {
        int n = colors.size(), l = 0, res = 0;

        for (int i = 1; i < (n + k - 1); i++)
        {
            // if both adjacent element are not alternating or similar
            // update left pointer to the right pointer
            if (colors[i % n] == colors[(i - 1) % n])
                l = i;

            int window_size = (i - l + 1);

            if (window_size >= k)
                l++;

            // count only valid sub-array, that are alternating elements
            if (window_size == k)
                res++;
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 1, 0, 1, 0};
    cout << obj.numberOfAlternatingGroups(arr, 3) << endl;

    return 0;
}