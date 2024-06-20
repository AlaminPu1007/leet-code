#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int n = nums.size() - 1;
        int steps = 0;

        // we need to sort the array
        sort(nums.begin(), nums.end());

        // get the median of the array
        // from this median value we get the most optimal solution
        int median = nums[n / 2];

        for (auto item : nums)
            steps += abs(item - median);

        return steps;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 10, 2, 9};
    cout << obj.minMoves2(arr) << endl;
    return 0;
}