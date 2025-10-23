#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
    {
        int n = fruits.size();
        int res = 0;

        for (auto item : fruits)
        {
            int count = 1;
            for (int i = 0; i < n; i++)
            {
                if (item <= baskets[i])
                {
                    baskets[i] = 0;
                    count = 0;
                    break;
                }
            }
            res += count;
        }

        return res;
    }
};

int main(void)
{
    vector<int> fruits = {4, 2, 5}, baskets = {3, 5, 4};
    Solution obj;

    cout << obj.numOfUnplacedFruits(fruits, baskets) << endl;
    return 0;
}