#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int len = candies.size();
        vector<bool> res;

        // get max item from candies
        int maxElement = 0;
        for (auto item : candies)
            maxElement = max(maxElement, item);

        for (auto item : candies)
            res.push_back((item + extraCandies) >= maxElement);
        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    vector<bool> res = obj.kidsWithCandies(arr, extraCandies);
    for (auto item : res)
        cout << item << " ";
    return 0;
}