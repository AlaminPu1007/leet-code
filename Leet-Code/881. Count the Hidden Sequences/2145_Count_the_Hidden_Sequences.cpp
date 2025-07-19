#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfArrays(vector<int> &differences, int lower, int upper)
    {
        int x = 0, y = 0, cur = 0;

        for (auto item : differences)
        {
            cur += item;

            x = max(x, cur);
            y = min(y, cur);

            if ((x - y > upper - lower))
                return 0;
        }

        return (upper - lower) - (x - y) + 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, -3, 4};
    cout << obj.numberOfArrays(arr, 1, 6) << endl;

    return 0;
}