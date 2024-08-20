#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int steps = 0;
        int minValue = INT_MAX;

        for (auto item : nums)
            minValue = min(minValue, item);

        for (auto item : nums)
            steps += (item - minValue);

        return steps;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3};
    cout << obj.minMoves(arr) << endl;
    return 0;
}