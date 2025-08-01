#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        int n = digits.size();
        set<int> res;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i == j || j == k || i == k)
                        continue;

                    int digit = digits[i] * 100 + digits[j] * 10 + digits[k];

                    if (digit >= 100 && digit % 2 == 0)
                    {
                        res.insert(digit);
                    }
                }
            }
        }

        vector<int> ans;

        for (auto item : res)
            ans.push_back(item);

        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 1, 3, 0};
    vector<int> res = obj.findEvenNumbers(arr);

    for (auto item : res)
        cout << item << " ";

    return 0;
}