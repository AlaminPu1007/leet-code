#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int tupleSameProduct(vector<int> &nums)
    {
        int n = nums.size();
        int res = 0;

        unordered_map<int, int> productCount, productPairs;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int product = nums[i] * nums[j];

                // count pairs
                productPairs[product] += productCount[product];

                // count the existence of this products
                productCount[product]++;
            }
        }

        for (auto item : productPairs)
            res += (8 * item.second);

        return res;
    }
};

int main(void)
{
    Solution obj;

    vector<int> arr = {2, 3, 4, 6};
    cout << obj.tupleSameProduct(arr) << endl;

    return 0;
}